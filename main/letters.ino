/*
 * 24/10/2022 - HD
 * 
 * One function describe how the led have to light on the right of the matrix (pixels 9 to 12).
 * Letters are describe with 5 lines.
 * Offset is used to scroll the letter to the right and create the animation
 * Each letter takes a different number of column on the matrix. Size_letter return it.
 * Print_letter function is a big switch case to call a letter function depending a char.
 * 
 */


void letter_A(int m_offset_a, CRGBArray<NUM_LEDS> m_leds, CRGB color)
{
  leds[XY(10 + m_offset_a,1)] = color; leds[XY(11 + m_offset_a,1)] = color; 
  leds[XY(9 + m_offset_a,2)] = color; leds[XY(12 + m_offset_a,2)] = color;
  leds[XY(9 + m_offset_a,3)] = color; leds[XY(11 + m_offset_a,3)] = color; leds[XY(10 + m_offset_a,3)] = color; leds[XY(12 + m_offset_a,3)] = color;
  leds[XY(9 + m_offset_a,4)] = color; leds[XY(12 + m_offset_a,4)] = color;
  leds[XY(9 + m_offset_a,5)] = color; leds[XY(12 + m_offset_a,5)] = color;
}

void letter_B(int m_offset_a, CRGBArray<NUM_LEDS> m_leds, CRGB color)
{
  leds[XY(9 + m_offset_a,1)] = color; leds[XY(10 + m_offset_a,1)] = color; leds[XY(11 + m_offset_a,1)] = color;
  leds[XY(9 + m_offset_a,2)] = color; leds[XY(12 + m_offset_a,2)] = color; 
  leds[XY(9 + m_offset_a,3)] = color; leds[XY(10 + m_offset_a,3)] = color; leds[XY(11 + m_offset_a,3)] = color;
  leds[XY(9 + m_offset_a,4)] = color; leds[XY(12 + m_offset_a,4)] = color; 
  leds[XY(9 + m_offset_a,5)] = color; leds[XY(10 + m_offset_a,5)] = color; leds[XY(11 + m_offset_a,5)] = color;
}

void letter_C(int m_offset_a, CRGBArray<NUM_LEDS> m_leds, CRGB color)
{
  leds[XY(11 + m_offset_a,1)] = color; leds[XY(12 + m_offset_a,1)] = color; 
  leds[XY(10 + m_offset_a,2)] = color;
  leds[XY(10 + m_offset_a,3)] = color;
  leds[XY(10 + m_offset_a,4)] = color;  
  leds[XY(11 + m_offset_a,5)] = color; leds[XY(12 + m_offset_a,5)] = color;
}

void letter_D(int m_offset_a, CRGBArray<NUM_LEDS> m_leds, CRGB color)
{
  leds[XY(9 + m_offset_a,1)] = color; leds[XY(10 + m_offset_a,1)] = color; leds[XY(11 + m_offset_a,1)] = color; 
  leds[XY(9 + m_offset_a,2)] = color; leds[XY(12 + m_offset_a,2)] = color; 
  leds[XY(9 + m_offset_a,3)] = color; leds[XY(12 + m_offset_a,3)] = color; 
  leds[XY(9 + m_offset_a,4)] = color; leds[XY(12 + m_offset_a,4)] = color; 
  leds[XY(9 + m_offset_a,5)] = color; leds[XY(10 + m_offset_a,5)] = color; leds[XY(11 + m_offset_a,5)] = color; 
}

void letter_E(int m_offset_a, CRGBArray<NUM_LEDS> m_leds, CRGB color)
{
  leds[XY(9 + m_offset_a,1)] = color; leds[XY(10 + m_offset_a,1)] = color; leds[XY(11 + m_offset_a,1)] = color; leds[XY(12 + m_offset_a,1)] = color; 
  leds[XY(9 + m_offset_a,2)] = color; 
  leds[XY(9 + m_offset_a,3)] = color; leds[XY(10 + m_offset_a,3)] = color; leds[XY(11 + m_offset_a,3)] = color; 
  leds[XY(9 + m_offset_a,4)] = color; 
  leds[XY(9 + m_offset_a,5)] = color; leds[XY(10 + m_offset_a,5)] = color; leds[XY(11 + m_offset_a,5)] = color; leds[XY(12 + m_offset_a,5)] = color; 
}

void letter_F(int m_offset_a, CRGBArray<NUM_LEDS> m_leds, CRGB color)
{
  leds[XY(9 + m_offset_a,1)] = color; leds[XY(10 + m_offset_a,1)] = color; leds[XY(11 + m_offset_a,1)] = color; leds[XY(12 + m_offset_a,1)] = color; 
  leds[XY(9 + m_offset_a,2)] = color; 
  leds[XY(9 + m_offset_a,3)] = color; leds[XY(10 + m_offset_a,3)] = color; leds[XY(11 + m_offset_a,3)] = color; 
  leds[XY(9 + m_offset_a,4)] = color; 
  leds[XY(9 + m_offset_a,5)] = color;
}

void letter_G(int m_offset_a, CRGBArray<NUM_LEDS> m_leds, CRGB color)
{
  leds[XY(10 + m_offset_a,1)] = color; leds[XY(11 + m_offset_a,1)] = color; leds[XY(12 + m_offset_a,1)] = color;
  leds[XY(9 + m_offset_a,2)] = color;
  leds[XY(9 + m_offset_a,3)] = color; leds[XY(11 + m_offset_a,3)] = color; leds[XY(12 + m_offset_a,3)] = color;
  leds[XY(9 + m_offset_a,4)] = color; leds[XY(12 + m_offset_a,4)] = color; 
  leds[XY(10 + m_offset_a,5)] = color; leds[XY(11 + m_offset_a,5)] = color; leds[XY(12 + m_offset_a,5)] = color;
}

void letter_H(int m_offset_a, CRGBArray<NUM_LEDS> m_leds, CRGB color)
{
  leds[XY(9 + m_offset_a,1)] = color; leds[XY(12 + m_offset_a,1)] = color;
  leds[XY(9 + m_offset_a,2)] = color; leds[XY(12 + m_offset_a,2)] = color;
  leds[XY(9 + m_offset_a,3)] = color; leds[XY(10 + m_offset_a,3)] = color; leds[XY(11 + m_offset_a,3)] = color; leds[XY(12 + m_offset_a,3)] = color;
  leds[XY(9 + m_offset_a,4)] = color; leds[XY(12 + m_offset_a,4)] = color;
  leds[XY(9 + m_offset_a,5)] = color; leds[XY(12 + m_offset_a,5)] = color;
}

void letter_I(int m_offset_a, CRGBArray<NUM_LEDS> m_leds, CRGB color)
{
  leds[XY(12 + m_offset_a,1)] = color; 
  leds[XY(12 + m_offset_a,2)] = color;
  leds[XY(12 + m_offset_a,3)] = color;
  leds[XY(12 + m_offset_a,4)] = color;
  leds[XY(12 + m_offset_a,5)] = color; 
}

void letter_J(int m_offset_a, CRGBArray<NUM_LEDS> m_leds, CRGB color)
{
  leds[XY(12 + m_offset_a,1)] = color; 
  leds[XY(12 + m_offset_a,2)] = color;
  leds[XY(12 + m_offset_a,3)] = color;
  leds[XY(9 + m_offset_a,4)] = color;  leds[XY(12 + m_offset_a,4)] = color;
  leds[XY(10 + m_offset_a,5)] = color; leds[XY(11 + m_offset_a,5)] = color;
}

void letter_K(int m_offset_a, CRGBArray<NUM_LEDS> m_leds, CRGB color)
{
  leds[XY(9 + m_offset_a,1)] = color; leds[XY(12 + m_offset_a,1)] = color;
  leds[XY(9 + m_offset_a,2)] = color; leds[XY(11 + m_offset_a,2)] = color;
  leds[XY(9 + m_offset_a,3)] = color; leds[XY(10 + m_offset_a,3)] = color;
  leds[XY(9 + m_offset_a,4)] = color; leds[XY(11 + m_offset_a,4)] = color;
  leds[XY(9 + m_offset_a,5)] = color; leds[XY(12 + m_offset_a,5)] = color;
}

void letter_L(int m_offset_a, CRGBArray<NUM_LEDS> m_leds, CRGB color)
{
  leds[XY(10 + m_offset_a,1)] = color; 
  leds[XY(10 + m_offset_a,2)] = color;
  leds[XY(10 + m_offset_a,3)] = color;
  leds[XY(10 + m_offset_a,4)] = color;
  leds[XY(10 + m_offset_a,5)] = color; leds[XY(11 + m_offset_a,5)] = color; leds[XY(12 + m_offset_a,5)] = color; 
}

void letter_M(int m_offset_a, CRGBArray<NUM_LEDS> m_leds, CRGB color)
{ 
  leds[XY(8 + m_offset_a,1)] = color; leds[XY(12 + m_offset_a,1)] = color;
  leds[XY(8 + m_offset_a,2)] = color; leds[XY(9 + m_offset_a,2)] = color; leds[XY(11 + m_offset_a,2)] = color; leds[XY(12 + m_offset_a,2)] = color;
  leds[XY(8 + m_offset_a,3)] = color; leds[XY(10 + m_offset_a,3)] = color; leds[XY(12 + m_offset_a,3)] = color;
  leds[XY(8 + m_offset_a,4)] = color; leds[XY(12 + m_offset_a,4)] = color;
  leds[XY(8 + m_offset_a,5)] = color; leds[XY(12 + m_offset_a,5)] = color;
}

void letter_N(int m_offset_a, CRGBArray<NUM_LEDS> m_leds, CRGB color)
{
  leds[XY(9 + m_offset_a,1)] = color; leds[XY(12 + m_offset_a,1)] = color; 
  leds[XY(9 + m_offset_a,2)] = color; leds[XY(10 + m_offset_a,2)] = color; leds[XY(12 + m_offset_a,2)] = color;
  leds[XY(9 + m_offset_a,3)] = color; leds[XY(11 + m_offset_a,3)] = color; leds[XY(12 + m_offset_a,3)] = color;
  leds[XY(9 + m_offset_a,4)] = color; leds[XY(12 + m_offset_a,4)] = color;
  leds[XY(9 + m_offset_a,5)] = color; leds[XY(12 + m_offset_a,5)] = color; 
}

void letter_O(int m_offset_a, CRGBArray<NUM_LEDS> m_leds, CRGB color)
{
  leds[XY(10 + m_offset_a,1)] = color; leds[XY(11 + m_offset_a,1)] = color; 
  leds[XY(9 + m_offset_a,2)] = color; leds[XY(12 + m_offset_a,2)] = color; 
  leds[XY(9 + m_offset_a,3)] = color; leds[XY(12 + m_offset_a,3)] = color; 
  leds[XY(9 + m_offset_a,4)] = color; leds[XY(12 + m_offset_a,4)] = color; 
  leds[XY(10 + m_offset_a,5)] = color; leds[XY(11 + m_offset_a,5)] = color; 
}

void letter_P(int m_offset_a, CRGBArray<NUM_LEDS> m_leds, CRGB color)
{
  leds[XY(9 + m_offset_a,1)] = color; leds[XY(10 + m_offset_a,1)] = color; leds[XY(11 + m_offset_a,1)] = color; 
  leds[XY(9 + m_offset_a,2)] = color; leds[XY(12 + m_offset_a,2)] = color; 
  leds[XY(9 + m_offset_a,3)] = color; leds[XY(10 + m_offset_a,3)] = color; leds[XY(11 + m_offset_a,3)] = color; 
  leds[XY(9 + m_offset_a,4)] = color; 
  leds[XY(9 + m_offset_a,5)] = color; 
}

void letter_Q(int m_offset_a, CRGBArray<NUM_LEDS> m_leds, CRGB color)
{
  leds[XY(10 + m_offset_a,1)] = color; leds[XY(11 + m_offset_a,1)] = color;
  leds[XY(9 + m_offset_a,2)] = color; leds[XY(12 + m_offset_a,2)] = color; 
  leds[XY(9 + m_offset_a,3)] = color; leds[XY(12 + m_offset_a,3)] = color; 
  leds[XY(9 + m_offset_a,4)] = color; leds[XY(11 + m_offset_a,4)] = color; leds[XY(12 + m_offset_a,4)] = color; 
  leds[XY(10 + m_offset_a,4)] = color; leds[XY(11 + m_offset_a,4)] = color; leds[XY(12 + m_offset_a,4)] = color; 
}

void letter_R(int m_offset_a, CRGBArray<NUM_LEDS> m_leds, CRGB color)
{
  leds[XY(9 + m_offset_a,1)] = color; leds[XY(10 + m_offset_a,1)] = color; leds[XY(11 + m_offset_a,1)] = color; 
  leds[XY(9 + m_offset_a,2)] = color; leds[XY(12 + m_offset_a,2)] = color;
  leds[XY(9 + m_offset_a,3)] = color; leds[XY(10 + m_offset_a,3)] = color; leds[XY(11 + m_offset_a,3)] = color;
  leds[XY(9 + m_offset_a,4)] = color; leds[XY(11 + m_offset_a,4)] = color;
  leds[XY(9 + m_offset_a,5)] = color; leds[XY(12 + m_offset_a,5)] = color;
}

void letter_S(int m_offset_a, CRGBArray<NUM_LEDS> m_leds, CRGB color)
{
  leds[XY(10 + m_offset_a,1)] = color; leds[XY(11 + m_offset_a,1)] = color; leds[XY(12 + m_offset_a,1)] = color; 
  leds[XY(9 + m_offset_a,2)] = color;
  leds[XY(10 + m_offset_a,3)] = color; leds[XY(11 + m_offset_a,3)] = color; 
  leds[XY(12 + m_offset_a,4)] = color;
  leds[XY(9 + m_offset_a,5)] = color; leds[XY(10 + m_offset_a,5)] = color; leds[XY(11 + m_offset_a,5)] = color; 
}

void letter_T(int m_offset_a, CRGBArray<NUM_LEDS> m_leds, CRGB color)
{
  leds[XY(10 + m_offset_a,1)] = color; leds[XY(11 + m_offset_a,1)] = color; leds[XY(12 + m_offset_a,1)] = color; 
  leds[XY(11 + m_offset_a,2)] = color;
  leds[XY(11 + m_offset_a,3)] = color;
  leds[XY(11 + m_offset_a,4)] = color;
  leds[XY(11 + m_offset_a,5)] = color; 
}

void letter_U(int m_offset_a, CRGBArray<NUM_LEDS> m_leds, CRGB color)
{
  leds[XY(9 + m_offset_a,1)] = color; leds[XY(12 + m_offset_a,1)] = color; 
  leds[XY(9 + m_offset_a,2)] = color;leds[XY(12 + m_offset_a,2)] = color;
  leds[XY(9 + m_offset_a,3)] = color;leds[XY(12 + m_offset_a,3)] = color;
  leds[XY(9 + m_offset_a,4)] = color;leds[XY(12 + m_offset_a,4)] = color;
  leds[XY(9 + m_offset_a,5)] = color;leds[XY(10 + m_offset_a,5)] = color;leds[XY(11 + m_offset_a,5)] = color; leds[XY(12 + m_offset_a,5)] = color;
}

void letter_V(int m_offset_a, CRGBArray<NUM_LEDS> m_leds, CRGB color)
{
  leds[XY(10 + m_offset_a,1)] = color; leds[XY(12 + m_offset_a,1)] = color; 
  leds[XY(10 + m_offset_a,2)] = color; leds[XY(12 + m_offset_a,2)] = color;
  leds[XY(10 + m_offset_a,3)] = color; leds[XY(12 + m_offset_a,3)] = color;
  leds[XY(10 + m_offset_a,4)] = color; leds[XY(12 + m_offset_a,4)] = color;
  leds[XY(11 + m_offset_a,5)] = color;
}

void letter_W(int m_offset_a, CRGBArray<NUM_LEDS> m_leds, CRGB color)
{
  leds[XY(8 + m_offset_a,1)] = color; leds[XY(12 + m_offset_a,1)] = color; 
  leds[XY(8 + m_offset_a,2)] = color; leds[XY(12 + m_offset_a,2)] = color;
  leds[XY(8 + m_offset_a,3)] = color; leds[XY(12 + m_offset_a,3)] = color;
  leds[XY(8 + m_offset_a,4)] = color; leds[XY(10 + m_offset_a,4)] = color; leds[XY(12 + m_offset_a,4)] = color;
  leds[XY(9 + m_offset_a,5)] = color; leds[XY(11 + m_offset_a,5)] = color;
}

void letter_X(int m_offset_a, CRGBArray<NUM_LEDS> m_leds, CRGB color)
{
  leds[XY(10 + m_offset_a,1)] = color; leds[XY(12 + m_offset_a,1)] = color; 
  leds[XY(10 + m_offset_a,2)] = color; leds[XY(12 + m_offset_a,2)] = color;
  leds[XY(11 + m_offset_a,3)] = color; 
  leds[XY(10 + m_offset_a,4)] = color; leds[XY(12 + m_offset_a,4)] = color;
  leds[XY(10 + m_offset_a,5)] = color; leds[XY(12 + m_offset_a,5)] = color;
}

void letter_Y(int m_offset_a, CRGBArray<NUM_LEDS> m_leds, CRGB color)
{
  leds[XY(10 + m_offset_a,1)] = color; leds[XY(12 + m_offset_a,1)] = color; 
  leds[XY(10 + m_offset_a,2)] = color; leds[XY(12 + m_offset_a,2)] = color;
  leds[XY(10 + m_offset_a,3)] = color; leds[XY(11 + m_offset_a,3)] = color; leds[XY(12 + m_offset_a,3)] = color; 
  leds[XY(11 + m_offset_a,4)] = color;
  leds[XY(11 + m_offset_a,5)] = color;
}

void letter_Z(int m_offset_a, CRGBArray<NUM_LEDS> m_leds, CRGB color)
{
  leds[XY(9 + m_offset_a,1)] = color; leds[XY(10 + m_offset_a,1)] = color; leds[XY(11 + m_offset_a,1)] = color; leds[XY(12 + m_offset_a,1)] = color; 
  leds[XY(12 + m_offset_a,2)] = color;
  leds[XY(11 + m_offset_a,3)] = color;
  leds[XY(10 + m_offset_a,4)] = color;
  leds[XY(9 + m_offset_a,1)] = color; leds[XY(10 + m_offset_a,1)] = color; leds[XY(11 + m_offset_a,1)] = color; leds[XY(12 + m_offset_a,1)] = color; 
}

void letter_SPACE(int m_offset_a, CRGBArray<NUM_LEDS> m_leds, CRGB color)
{
  
}

void letter_QUOTE(int m_offset_a, CRGBArray<NUM_LEDS> m_leds, CRGB color)
{
  leds[XY(12 + m_offset_a,1)] = color;
  leds[XY(12 + m_offset_a,2)] = color;
}

void letter_INF(int m_offset_a, CRGBArray<NUM_LEDS> m_leds, CRGB color)
{
  leds[XY(12 + m_offset_a,1)] = color;
  leds[XY(11 + m_offset_a,2)] = color;
  leds[XY(10 + m_offset_a,3)] = color;
  leds[XY(11 + m_offset_a,4)] = color;
  leds[XY(12 + m_offset_a,5)] = color;
}

void letter_3(int m_offset_a, CRGBArray<NUM_LEDS> m_leds, CRGB color)
{
  leds[XY(9 + m_offset_a,1)] = color; leds[XY(10 + m_offset_a,1)] = color; leds[XY(11 + m_offset_a,1)] = color; leds[XY(12 + m_offset_a,1)] = color;
  leds[XY(12 + m_offset_a,2)] = color;
  leds[XY(10 + m_offset_a,3)] = color; leds[XY(11 + m_offset_a,3)] = color; leds[XY(12 + m_offset_a,3)] = color;
  leds[XY(12 + m_offset_a,4)] = color;
  leds[XY(9 + m_offset_a,5)] = color; leds[XY(10 + m_offset_a,5)] = color; leds[XY(11 + m_offset_a,5)] = color; leds[XY(12 + m_offset_a,5)] = color;
}


void print_letter(String m_letter, int m_offset_a, CRGBArray<NUM_LEDS> m_leds, CRGB color)
{
  if(m_letter == "A")
    letter_A(m_offset_a, m_leds, color);
  if(m_letter == "B")
    letter_B(m_offset_a, m_leds, color);
  if(m_letter == "C")
    letter_C(m_offset_a, m_leds, color);
  if(m_letter == "D")
    letter_D(m_offset_a, m_leds, color);
  if(m_letter == "E")
    letter_E(m_offset_a, m_leds, color);
  if(m_letter == "F")
    letter_F(m_offset_a, m_leds, color);
  if(m_letter == "G")
    letter_G(m_offset_a, m_leds, color);
  if(m_letter == "H")
    letter_H(m_offset_a, m_leds, color);
  if(m_letter == "I")
    letter_I(m_offset_a, m_leds, color);
  if(m_letter == "J")
    letter_J(m_offset_a, m_leds, color);
  if(m_letter == "K")
    letter_K(m_offset_a, m_leds, color);
  if(m_letter == "L")
    letter_L(m_offset_a, m_leds, color);
  if(m_letter == "M")
    letter_M(m_offset_a, m_leds, color);
  if(m_letter == "N")
    letter_N(m_offset_a, m_leds, color);
  if(m_letter == "O")
    letter_O(m_offset_a, m_leds, color);
  if(m_letter == "P")
    letter_P(m_offset_a, m_leds, color);
  if(m_letter == "Q")
    letter_Q(m_offset_a, m_leds, color);
  if(m_letter == "R")
    letter_R(m_offset_a, m_leds, color);
  if(m_letter == "S")
    letter_S(m_offset_a, m_leds, color);
  if(m_letter == "T")
    letter_T(m_offset_a, m_leds, color);
  if(m_letter == "U")
    letter_U(m_offset_a, m_leds, color);
  if(m_letter == "V")
    letter_V(m_offset_a, m_leds, color);
  if(m_letter == "W")
    letter_W(m_offset_a, m_leds, color);
  if(m_letter == "X")
    letter_X(m_offset_a, m_leds, color);
  if(m_letter == "Y")
    letter_Y(m_offset_a, m_leds, color);
  if(m_letter == "Z")
    letter_Z(m_offset_a, m_leds, color);
  if(m_letter == " ")
    letter_SPACE(m_offset_a, m_leds, color);
  if(m_letter == "'")
    letter_QUOTE(m_offset_a, m_leds, color);
  if(m_letter == "<")
    letter_INF(m_offset_a, m_leds, color);
  if(m_letter == "3")
    letter_3(m_offset_a, m_leds, color);
}
int size_letter(String m_letter)
{
  if(m_letter == "A")
    return(4);
  if(m_letter == "B")
    return(4);
  if(m_letter == "C")
    return(3);
  if(m_letter == "D")
    return(4);
  if(m_letter == "E")
    return(4);
  if(m_letter == "F")
    return(4);
  if(m_letter == "G")
    return(4);
  if(m_letter == "H")
    return(4);
  if(m_letter == "I")
    return(1);
  if(m_letter == "J")
    return(4);
  if(m_letter == "K")
    return(4);
  if(m_letter == "L")
    return(3);
  if(m_letter == "M")
    return(5);
  if(m_letter == "N")
    return(4);
  if(m_letter == "O")
    return(4);
  if(m_letter == "P")
    return(4);
  if(m_letter == "Q")
    return(4);
  if(m_letter == "R")
    return(4);
  if(m_letter == "S")
    return(4);
  if(m_letter == "T")
    return(3);
  if(m_letter == "U")
    return(4);
  if(m_letter == "V")
    return(3);
  if(m_letter == "W")
    return(5);
  if(m_letter == "X")
    return(3);
  if(m_letter == "Y")
    return(3);
  if(m_letter == "Z")
    return(4);
  if(m_letter == " ")
    return(3);
  if(m_letter == "'")
    return(1);
  if(m_letter == "<")
    return(3);
  if(m_letter == "3")
    return(4);
  return(0);
}
