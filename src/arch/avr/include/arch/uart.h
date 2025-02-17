// SPDX-License-Identifier: GPL-3.0-only

#ifndef _ARCH_UART_H
#define _ARCH_UART_H

#include <stdint.h>

struct Uart {
    volatile uint8_t *a;
    volatile uint8_t *b;
    volatile uint8_t *c;
    volatile uint8_t *data;
    volatile uint8_t *baud_l;
    volatile uint8_t *baud_h;
    uint8_t a_read;
    uint8_t a_write;
    uint8_t a_init;
    uint8_t b_init;
    uint8_t c_init;
};

void uart_init(struct Uart *uart, uint32_t baud);

int16_t uart_count(void);
struct Uart *uart_new(int16_t num);

uint8_t uart_can_read(struct Uart *uart);
uint8_t uart_can_write(struct Uart *uart);

uint8_t uart_read(struct Uart *uart);
void uart_write(struct Uart *uart, uint8_t data);

extern struct Uart *uart_stdio;
void uart_stdio_init(int16_t num, uint32_t baud);

#endif // _ARCH_UART_H
