void eyes(CRGB color)
{
  init_leds_ears(color);
  // EYES
  int offset = 7;
  // EYES OPEN
  // LEFT EYE               -  RIGHT EYE
  leds[XY(3,3)] = color; leds[XY(3 + offset,3)] = color;
  leds[XY(1,2)] = color; leds[XY(1 + offset,2)] = color;
  leds[XY(1,3)] = color; leds[XY(1 + offset,3)] = color;
  leds[XY(1,4)] = color; leds[XY(1 + offset,4)] = color;
  leds[XY(2,1)] = color; leds[XY(2 + offset,1)] = color;
  leds[XY(3,1)] = color; leds[XY(3 + offset,1)] = color;
  leds[XY(4,1)] = color; leds[XY(4 + offset,1)] = color;
  leds[XY(2,5)] = color; leds[XY(2 + offset,5)] = color;
  leds[XY(3,5)] = color; leds[XY(3 + offset,5)] = color;
  leds[XY(4,5)] = color; leds[XY(4 + offset,5)] = color;
  leds[XY(5,2)] = color; leds[XY(5 + offset,2)] = color;
  leds[XY(5,3)] = color; leds[XY(5 + offset,3)] = color;
  leds[XY(5,4)] = color; leds[XY(5 + offset,4)] = color;
  FastLED.show();
  delay(random(1000,3000));
  fill_solid(leds, NUM_LEDS, CRGB::Black);
  // EYES CLOSED
  // LEFT EYE               -  RIGHT EYE
  leds[XY(1,3)] = color; leds[XY(1 + offset,3)] = color;
  leds[XY(2,3)] = color; leds[XY(2 + offset,3)] = color;
  leds[XY(3,3)] = color; leds[XY(3 + offset,3)] = color;
  leds[XY(4,3)] = color; leds[XY(4 + offset,3)] = color;
  leds[XY(5,3)] = color; leds[XY(5 + offset,3)] = color;
  FastLED.show();
  delay(random(300,1000));
  fill_solid(leds, NUM_LEDS, CRGB::Black);
}
