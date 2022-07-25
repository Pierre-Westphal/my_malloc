/*
** EPITECH PROJECT, 2021
** B-PSU-400-LYN-4-1-malloc-pierre1.westphal
** File description:
** free
*/

#include "my.h"
#include <stdio.h>

void free(void *ptr)
{
    zone *empty = ptr;
    size_t block_size = 0;

    if (ptr != NULL) {
        ptr = ptr - sizeof(zone);
        if (empty->adress == ptr) {
            empty->adress = NULL;
            empty->pos = 0;
            empty->free = false;
            add_block(block_size, empty->adress);
            empty->free = true;
            empty->next = NULL;
        }
        empty = empty->next;
    }
}