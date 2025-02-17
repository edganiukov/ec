// SPDX-License-Identifier: GPL-3.0-only

#ifndef _EC_KBC_H
#define _EC_KBC_H

#include <common/macro.h>

#include <stdbool.h>
#include <stdint.h>

struct Kbc {
    // Control register
    volatile uint8_t *control;
    // Interrupt control register
    volatile uint8_t *irq;
    // Status register
    volatile uint8_t *status;
    // Keyboard out register
    volatile uint8_t *keyboard_out;
    // Mouse out register
    volatile uint8_t *mouse_out;
    // Data in register
    volatile uint8_t *data_in;
};

extern struct Kbc __code KBC;

#define KBC_STS_OBF BIT(0)
#define KBC_STS_IBF BIT(1)
#define KBC_STS_CMD BIT(3)

uint8_t kbc_status(struct Kbc *kbc);
uint8_t kbc_read(struct Kbc *kbc);
bool kbc_keyboard(struct Kbc *kbc, uint8_t data, uint16_t timeout);
bool kbc_mouse(struct Kbc *kbc, uint8_t data, uint16_t timeout);

volatile uint8_t __xdata __at(0x1300) KBHICR;
volatile uint8_t __xdata __at(0x1302) KBIRQR;
volatile uint8_t __xdata __at(0x1304) KBHISR;
volatile uint8_t __xdata __at(0x1306) KBHIKDOR;
volatile uint8_t __xdata __at(0x1308) KBHIMDOR;
volatile uint8_t __xdata __at(0x130A) KBHIDIR;

#endif // _EC_KBC_H
