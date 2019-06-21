#include <avr/io.h>
#include <util/delay.h>

int main(void) {

DDRD = 0xff;


while (1) {
PORTD = (PD2 << 1);
_delay_ms(500);

PORTD &=  ~(PD2 << 1);
_delay_ms(500);
}


return (0);
}
