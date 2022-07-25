/*
** EPITECH PROJECT, 2020
** Cp makefile
** File description:
** my
*/

#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdbool.h>


#ifndef _MY_H_
#define _MY_H_
#define size_struct sizeof(struct zone_t)
typedef struct zone_t zone;

struct zone_t {
    struct zone_t *next;
    struct zone_t *previous;
    void *adress;
    bool free;
    size_t pos;
};

void my_free(void *ptr);
void *calloc(size_t nmemb, size_t size);
void *malloc(size_t size);
void *realloc(void *ptr, size_t size);
void *reallocarray(void *ptr, size_t nmemb, size_t size);
zone *add_block(size_t size, zone *cblock);
size_t align(size_t size);

#endif