void light_up_offset_D(int m_led_idx, int m_offset, CRGB color, int m_reverse)
{
  if(m_reverse == 0)
  {
    if(m_led_idx + m_offset >= NUM_LEDS_EAR)
      leds_ear_D[m_led_idx + m_offset - NUM_LEDS_EAR] = color;
    else
      leds_ear_D[m_led_idx + m_offset] = color;
  }
  else
  {
    if(m_led_idx - m_offset < 0)
      leds_ear_D[m_led_idx - m_offset + NUM_LEDS_EAR] = color;
    else
      leds_ear_D[m_led_idx - m_offset] = color;
  }
}

void light_up_offset_G(int m_led_idx, int m_offset, CRGB color, int m_reverse)
{
  if(m_reverse == 0)
  {
    if(m_led_idx + m_offset >= NUM_LEDS_EAR)
      leds_ear_G[m_led_idx + m_offset - NUM_LEDS_EAR] = color;
    else
      leds_ear_G[m_led_idx + m_offset] = color;
  }
  else
  {
    if(m_led_idx - m_offset < 0)
      leds_ear_G[m_led_idx - m_offset + NUM_LEDS_EAR] = color;
    else
      leds_ear_G[m_led_idx - m_offset] = color;
  }
}

void light_loop(int loop_length, int speed, int m_reverse)
{
  if(m_reverse == 0)
    for(int led_idx = 0; led_idx < NUM_LEDS_EAR; led_idx++)
    {
      for(int loop_length_idx = 0; loop_length_idx < loop_length; loop_length_idx++)
        light_up_offset_D(led_idx, loop_length_idx, CRGB::Red, m_reverse);    
      FastLED.show();
      delay(speed);
      
      light_up_offset_D(led_idx, loop_length, CRGB::Red, m_reverse); 
      light_up_offset_D(led_idx, 0, CRGB::Black, m_reverse);    
      FastLED.show();
      delay(speed);
    }
  else
    for(int led_idx = NUM_LEDS_EAR-1; led_idx >= 0; led_idx--)
    {
      for(int loop_length_idx = 0; loop_length_idx < loop_length; loop_length_idx++)
        light_up_offset_D(led_idx, loop_length_idx, CRGB::Red, m_reverse);    
      FastLED.show();
      delay(speed);
      
      light_up_offset_D(led_idx, loop_length, CRGB::Red, m_reverse); 
      light_up_offset_D(led_idx, 0, CRGB::Black, m_reverse);    
      FastLED.show();
      delay(speed);
    }
}
