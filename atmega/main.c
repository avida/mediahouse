#include <avr/io.h>
#include <avr/power.h>
#include <avr/interrupt.h>
#include <stdio.h>
#include <stdlib.h>
#include <uart.h>
#include "atmega_pin.h"
#include <rc_decoder/rc_transmitter.h>
#include "pwm_rc_pin.h"
#include "dht11.h"

#include <util/delay.h>
//dccduino ->   gpio
// D0-7 = PD0-7
// D8-13 = PB0-5
// A0-5 -> PC0-7
// A6-7 = ADC6-7
//#define F_CPU 16000000UL
// led pin = PB5

uart::UART serial;

//#define SPI_MASTER
//#include "test_spi.h"

//#include "test_irdecoder.h"

//#include "test_dht11.h"

#include "test_rfidreader.h"

int main(void) {
   serial << "Privet\n";
   test_main();
   serial << "Poka\n";
   return 0;    
}