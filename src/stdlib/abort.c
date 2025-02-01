/*
 * Copyright (c) mlibc & plct lab
 *
 * SPDX-License-Identifier: MIT
 *
 * Change Logs:
 * Date           Author       Notes
 * 2024/6/4   0Bitbiscuits the first version
 * 2025/2/1   Chris-godz   the second version
 */
#include <stdlib.h>
#include <compiler.h>
#include <signal.h>

mlibc_weak void abort(void)
{
    while(1)
    {
        raise(SIGABRT);
        exit(EXIT_FAILURE);
    }
}