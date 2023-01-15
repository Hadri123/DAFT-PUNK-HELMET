void life(CRGB color, int life_speed)
{
  leds_ear_G[0] = color; FastLED.show(); delay(life_speed);
  leds_ear_G[12] = color; FastLED.show(); delay(life_speed);
  leds[XY(1, 3)] = color; FastLED.show(); delay(life_speed);
  leds[XY(2, 3)] = color; FastLED.show(); delay(life_speed);
  leds[XY(3, 2)] = color; FastLED.show(); delay(life_speed);
  leds[XY(4, 1)] = color; FastLED.show(); delay(life_speed);
  leds[XY(5, 2)] = color; FastLED.show(); delay(life_speed);
  leds[XY(6, 3)] = color; FastLED.show(); delay(life_speed);
  leds[XY(7, 4)] = color; FastLED.show(); delay(life_speed);
  leds[XY(8, 5)] = color; FastLED.show(); delay(life_speed);
  leds[XY(9, 4)] = color; FastLED.show(); delay(life_speed);
  leds[XY(10, 3)] = color; FastLED.show(); delay(life_speed);
  leds[XY(11, 3)] = color; FastLED.show(); delay(life_speed);
  leds[XY(12, 3)] = color; FastLED.show(); delay(life_speed);
  leds_ear_D[0] = color; FastLED.show(); delay(life_speed);
  leds_ear_D[12] = color; FastLED.show(); delay(life_speed);
  delay(2000);
  init_leds(CRGB::Black);
  init_leds_ears(color); 
}
