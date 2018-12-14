/*
 * Copyright 2018, Zayn Otley.
 * Distributed under the terms of the MIT License.
 *
 * Authors:
 *      Zayn Otley (zayn@certificationcourses.co.uk)
 */

/*!	Reboots the system. */

/* Build with:
 *
 * g++ -Ofast -march=native \
 * -I/boot/system/develop/headers/private/system/ \
 * -I/boot/home/src/haiku/headers/private/system/arch/x86_64 \
 * reboot.cpp -o reboot -lbe
 *
 */

#include <private/system/syscalls.h>

int main(int argc, char **argv) {
    _kern_shutdown(true);
    return 0;
}

