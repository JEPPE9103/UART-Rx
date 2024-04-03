#ifndef SERIAL_H
#define SERIAL_H

void uart_init();
void uart_putchar(char c);
void uart_putstr(const char *str);
char uart_getchar();
void uart_echo();

#endif
