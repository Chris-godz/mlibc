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

lldiv_t lldiv(long long num, long long den)
{
    return (lldiv_t){ num/den, num%den };
}