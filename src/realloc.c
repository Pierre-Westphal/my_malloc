/*
** EPITECH PROJECT, 2021
** B-PSU-400-LYN-4-1-malloc-pierre1.westphal
** File description:
** realloc
*/

#include "my.h"

void *realloc(void *ptr, size_t size)
{
    zone *mem;
    void *new_ptr;

    size = align(size);
    mem = (zone*)((char*)ptr - size_struct);
    if (mem->pos >= align(size))
        return ptr;
    new_ptr = malloc(size);
    memcpy(new_ptr, mem + sizeof(size_struct), mem->pos);
    free(ptr);
    return new_ptr;
}