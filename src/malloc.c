/*
** EPITECH PROJECT, 2021
** B-PSU-400-LYN-4-1-malloc-pierre1.westphal
** File description:
** malloc
*/

#include "my.h"
#include <stdio.h>
#include <math.h>

void *malloc(size_t size)
{
    zone *cblock = NULL;
    size = align(size);

    if (!cblock)
        cblock = sbrk(sizeof(zone));
        cblock->adress = sbrk(0);
        cblock->pos = sysconf(_SC_PAGESIZE);
        cblock->free = false;
        cblock->next = NULL;
        cblock->previous = NULL;
    if (cblock->pos == 0 || cblock == NULL)
        return NULL;
    cblock->pos = size + sizeof(zone);
    cblock = add_block(size, cblock);
    cblock->free = true;
    cblock->next = NULL;
    return cblock->adress;
}