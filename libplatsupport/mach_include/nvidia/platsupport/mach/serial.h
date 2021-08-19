/*
 * Copyright 2017, Data61, CSIRO (ABN 41 687 119 230)
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */
#pragma once
#include <autoconf.h>
#include <platsupport/gen_config.h>

/* Official device IDs, as recognized by ps_cdev_init().
 *
 * The first 4 IDs, NV_UART[ABCD] are "real" devices, and the next 4 IDs,
 * NV_UART[ABCD]_ASYNC are those same devices repeated.
 *
 * The difference is that if you request the first 4, you will get a handle to
 * a ps_chardevice_t that exports a polling, synchronous interface.
 *
 * If you request the other 4, you will get a handle to a ps_chardevice_t that
 * exports an irq-based, asynchronous interface (and requires you to handle
 * IRQs and use callback functions).
 */
enum chardev_id {
    /* Synchronous devices. */
    NV_UARTA,
    NV_UARTB,
    NV_UARTC,
    NV_UARTD,
    /* Asynchronous versions of those devices. */
    NV_UARTA_ASYNC,
    NV_UARTB_ASYNC,
    NV_UARTC_ASYNC,
    NV_UARTD_ASYNC,
    /* Tegra common UART */
    NV_TCU,
    /* Aliases */
    PS_SERIAL0 = NV_UARTA,
    PS_SERIAL1 = NV_UARTB,
    PS_SERIAL2 = NV_UARTC,
    PS_SERIAL3 = NV_UARTD,
};
