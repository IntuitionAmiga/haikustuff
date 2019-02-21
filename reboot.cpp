/*
 * Copyright 2018, Zayn Otley.
 * Distributed under the terms of the MIT License.
 *
 * Authors:
 *      Zayn Otley (zayn@certificationcourses.co.uk)
 * 
 * Reboots the system.
 *
*/

#include <private/system/syscalls.h>

int main(int argc, char **argv) {
    _kern_shutdown(true);
    return 0;
}

