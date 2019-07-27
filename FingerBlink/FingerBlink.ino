/*******************************************************************
   Blinking an LED using just an ATtiny13

   For use with this badge
   https://www.tindie.com/products/brianlough/should-have-used-a-555/

   Built using https://github.com/MCUdude/MicroCore

   By Brian Lough
   YouTube: https://www.youtube.com/brianlough
   Tindie: https://www.tindie.com/stores/brianlough/
   Twitter: https://twitter.com/witnessmenow
 *******************************************************************/


#include <avr/io.h>
#include <util/delay.h>

#define FINGER_PIN PB4

int main(void)
{       
  DDRB |= _BV(FINGER_PIN);  // Set PB1 as output, ignore the rest 
  // Infinite loop
  while(1)
  {

    PORTB |= _BV(FINGER_PIN); // pin high
    _delay_ms(1000);
    PORTB &= ~_BV(FINGER_PIN); //Pin low
    _delay_ms(1000);
  }
    
  return 0;
}
