#include <FastLED.h>
#include <SoftwareSerial.h>
SoftwareSerial mySerial(2, 3); //TX, RX for bluetooth

// LED MATRIX
#define NUM_LEDS 60
#define BRIGHTNESS 64
#define DATA_PIN 6  // Digital In for Led Strip

// LED RING
#define NUM_LEDS_EAR 24
#define DATA_PIN_EAR_D 4  // Digital In for right ear
#define DATA_PIN_EAR_G 5  // Digital In for left ear

CRGBArray<NUM_LEDS> leds;
CRGBArray<NUM_LEDS_EAR> leds_ear_G;
CRGBArray<NUM_LEDS_EAR> leds_ear_D;

int XY(int x,int y)
{
   int i;
   int led_per_row = 12;
   int nb_row = 5;
   if((x > led_per_row) or (x < 1))  // depassement de rangée ( pour affichage des lettres)
      return(60);
   x = abs(x - led_per_row);
   y = abs(y - nb_row);
   i = x + led_per_row*y;
   if(y % 2 != 0)
   {
      i += led_per_row - 2*x -1;
   }
   return i;
}

void waiting(CRGB color, int waiting_speed)
{
  //WAITING
  int loop_length = 4;
  int idx_matrix = 1;
  int reverse_idx = 23;
  for(int clk = 0; clk < 24; clk++)
  {
    // EAR
    for(int loop_length_idx = 0; loop_length_idx < loop_length; loop_length_idx++)
    {
        light_up_offset_G(clk, loop_length_idx, color, 1);
        light_up_offset_D(reverse_idx, loop_length_idx, color, 0);
    }
    // LED MATRIX
      if(clk%2 == 0)
        idx_matrix += 1;
      
      leds[XY(idx_matrix,1)] = color;
      leds[XY(idx_matrix,2)] = color;
      leds[XY(idx_matrix,3)] = color;
      leds[XY(idx_matrix,4)] = color;
      leds[XY(idx_matrix,5)] = color;
      
      leds[XY(idx_matrix-1,1)] = color;
      leds[XY(idx_matrix-1,2)] = color;
      leds[XY(idx_matrix-1,3)] = color;
      leds[XY(idx_matrix-1,4)] = color;
      leds[XY(idx_matrix-1,5)] = color;
    
      leds[XY(idx_matrix-2,1)] = CRGB::Black;
      leds[XY(idx_matrix-2,2)] = CRGB::Black;
      leds[XY(idx_matrix-2,3)] = CRGB::Black;
      leds[XY(idx_matrix-2,4)] = CRGB::Black;
      leds[XY(idx_matrix-2,5)] = CRGB::Black;
   
    FastLED.show();
    delay(waiting_speed);
      
    light_up_offset_G(clk, loop_length, color, 0); 
    light_up_offset_G(clk, 0, CRGB::Black, 0);   
    light_up_offset_D(reverse_idx, loop_length, color, 1); 
    light_up_offset_D(reverse_idx, 0, CRGB::Black, 1);   
    FastLED.show();
    delay(waiting_speed);
    reverse_idx -= 1;
  }
  idx_matrix = 12;
  reverse_idx = 23;
  for(int clk = 0; clk < 24; clk++)
  {
    // EAR
    for(int loop_length_idx = 0; loop_length_idx < loop_length; loop_length_idx++)
    {
        light_up_offset_G(clk, loop_length_idx, color, 0);
        light_up_offset_D(reverse_idx, loop_length_idx, color, 1);
    }

      if(clk%2 == 0)
        idx_matrix -= 1;
      leds[XY(idx_matrix,1)] = color;
      leds[XY(idx_matrix,2)] = color;
      leds[XY(idx_matrix,3)] = color;
      leds[XY(idx_matrix,4)] = color;
      leds[XY(idx_matrix,5)] = color;
      
      leds[XY(idx_matrix+1,1)] = color;
      leds[XY(idx_matrix+1,2)] = color;
      leds[XY(idx_matrix+1,3)] = color;
      leds[XY(idx_matrix+1,4)] = color;
      leds[XY(idx_matrix+1,5)] = color;
    
      leds[XY(idx_matrix+2,1)] = CRGB::Black;
      leds[XY(idx_matrix+2,2)] = CRGB::Black;
      leds[XY(idx_matrix+2,3)] = CRGB::Black;
      leds[XY(idx_matrix+2,4)] = CRGB::Black;
      leds[XY(idx_matrix+2,5)] = CRGB::Black;
    
    FastLED.show();
    delay(waiting_speed);
     
    light_up_offset_G(clk, loop_length, color, 0); 
    light_up_offset_G(clk, 0, CRGB::Black, 0); 
    light_up_offset_D(reverse_idx, loop_length, color, 1); 
    light_up_offset_D(reverse_idx, 0, CRGB::Black, 1);     
    FastLED.show();
    delay(waiting_speed);
    reverse_idx -= 1;
  }
}

void my_random(CRGB color, int m_speed)
{
  init_leds_ears(CRGB::Black);
  init_leds(CRGB::Black);
  for(int k = 0; k < 40; k++)
    leds[random(0,NUM_LEDS)] = color;
  for(int k = 0; k < 15; k++)
  {
    leds_ear_G[random(0,NUM_LEDS_EAR)] = color;
    leds_ear_D[random(0,NUM_LEDS_EAR)] = color;
  }
  FastLED.show();
  delay(m_speed);
}

void initBluetooth()
{
  mySerial.begin(9600);
  Serial.begin(9600);
}
String i;
String updateSerial()
{
  if(mySerial.available())
  {
    i = mySerial.readString();
    Serial.write(mySerial.read());
    Serial.println(i);
    return i;
  }
  if(Serial.available())
  {
    mySerial.write(Serial.read());
  }
  return("");
}

String saved_word = "";
CRGB m_color = CRGB::Red;
int m_word_speed = 80;
int m_waiting_speed = 20;
int m_life_speed = 150;
int m_random_speed = 120;

void setup() { 
    initBluetooth();
    FastLED.addLeds<NEOPIXEL, DATA_PIN>(leds, NUM_LEDS);
    FastLED.addLeds<NEOPIXEL, DATA_PIN_EAR_D>(leds_ear_D, NUM_LEDS_EAR);
    FastLED.addLeds<NEOPIXEL, DATA_PIN_EAR_G>(leds_ear_G, NUM_LEDS_EAR);
    FastLED.setBrightness( BRIGHTNESS );
    Serial.println("SETUP");
    init_leds(CRGB::Black);
    init_leds_ears(CRGB::Black);
    life(m_color, m_life_speed);
    waiting(m_color, m_waiting_speed);
}



void loop() 
{ 
    String my_word = "";
    my_word = updateSerial();

    // save word to infinite repeat
    if(my_word == "blue")
      m_color = CRGB::Blue;
    else if(my_word == "red")
      m_color = CRGB::Red;
    else if(my_word == "green")
      m_color = CRGB::Green;
    else if(my_word == "purple")
      m_color = CRGB::Purple;
    else if(my_word == "orange")
      m_color = CRGB::Orange;
    else if(my_word == "white")
      m_color = CRGB::White;
    else if(my_word == "yellow")
      m_color = CRGB::Yellow;
    else if(my_word == "-")
    {
      m_word_speed *= 1.5;
      m_waiting_speed *= 1.5;
      m_life_speed *= 1.5;
      m_random_speed *= 1.5;
    }
    else if(my_word == "+")
    {
      m_word_speed /= 1.5;
      m_waiting_speed /= 1.5;
      m_life_speed /= 1.5;
      m_random_speed /= 1.5;
    }
    else if(my_word.length()>0)
      saved_word = my_word;

    
    if(saved_word == "1")
      eyes(m_color);
    else if(saved_word == "2")
      waiting(m_color, m_waiting_speed);
    else if(saved_word == "3")
      my_random(m_color, m_random_speed);
    else
    {
      init_leds(CRGB::Black);
      init_leds_ears(m_color);
      saved_word.toUpperCase();
      // array of size of each letter of the word
      int array_size_letters[saved_word.length()];
      
      int total_size_letters = 0;
      for(int letter_idx = 0; letter_idx < saved_word.length(); letter_idx++)
      {
        total_size_letters += size_letter((String)saved_word[letter_idx]);
        array_size_letters[letter_idx] = size_letter((String)saved_word[letter_idx]);
      }
      int size_letters = -1;
      int letter_idx = 0;
      for(int row_idx = 0; row_idx < 12 + total_size_letters + saved_word.length(); row_idx++)
      {
        size_letters = -1;
        for(int letter_idx = 0; letter_idx < saved_word.length(); letter_idx++)
        {
          if( row_idx > size_letters)
          {
            print_letter((String)saved_word[letter_idx], size_letters - row_idx + array_size_letters[letter_idx] + 1 + letter_idx, leds, m_color);
          }
          size_letters += array_size_letters[letter_idx];
        }
        FastLED.show();
        delay(m_word_speed);
        
        size_letters = -1;
        for(int letter_idx = 0; letter_idx < saved_word.length(); letter_idx++)
        {
          if( row_idx > size_letters)
          {
            print_letter((String)saved_word[letter_idx], size_letters - row_idx + array_size_letters[letter_idx] + 1 + letter_idx, leds, CRGB::Black);
            print_letter((String)saved_word[letter_idx], size_letters - row_idx + array_size_letters[letter_idx] + 1 - 1 + letter_idx, leds, m_color);
          }
          size_letters += array_size_letters[letter_idx];
        }
        FastLED.show();
        delay(m_word_speed);
      }
    }
    
}
