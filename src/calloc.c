/*
** EPITECH PROJECT, 2021
** B-PSU-400-LYN-4-1-malloc-pierre1.westphal
** File description:
** calloc
*/

#include "my.h"

void *calloc(size_t nmemb, size_t size)
{
    char *adress = malloc(size * nmemb);

    for (int i = 0; i < size; i++)
        adress[i] = 0;
    return adress;
}