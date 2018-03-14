#ifdef __ASSEMBLER__

  /* Assembler-only stuff */

#else

  /* C-stuff, define your assembly functions here */

extern "C" uint8_t push_button_1(void);  
  extern "C" void led_init(void);
  extern "C" void push_button_init(void);
    
#endif
