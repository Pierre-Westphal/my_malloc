/*
** EPITECH PROJECT, 2021
** B-PSU-400-LYN-4-1-malloc-pierre1.westphal
** File description:
** tools
*/

#include "my.h"

zone *add_block(size_t size, zone *cblock)
{
    zone *fblock;

    fblock = sbrk(sizeof(zone) + size);

    if (cblock != NULL) {
        fblock->adress = cblock->adress;
        fblock->pos = cblock->pos;
        fblock->previous = fblock;
    }
    return fblock;
}

size_t align(size_t size)
{
    return ((size - 1) / 8 * 8 + 8);
}