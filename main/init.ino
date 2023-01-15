void init_leds(CRGB color)
{
  for(int j =  0; j < NUM_LEDS; j++)
    leds[j] = color;
}

void init_leds_ears(CRGB color)
{
  for(int j =  0; j < NUM_LEDS_EAR; j++)
  {
    leds_ear_D[j] = color;
    leds_ear_G[j] = color;
  }
}
