#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
    DDRB |= (1 << PB5);   // set pin 13 as output

    while (1)
    {
        PORTB |= (1 << PB5);   // set pin 13 high
        _delay_ms(1000);       // delay for 1 second
        PORTB &= ~(1 << PB5);  // set pin 13 low
        _delay_ms(1000);       // delay for 1 second
    }

    return 0;
}
