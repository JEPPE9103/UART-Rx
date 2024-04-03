#include <Arduino.h>
#include "serial.h"

void setup() {
  uart_init(); // Initiera UART
}

void loop() {
  uart_echo(); // Lyssna efter inkommande tecken och skicka tillbaka samma tecken
}
