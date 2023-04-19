#ifndef FPOINTERS_H
#define FPOINTERS_H

#include <stddef.h>
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));

#endif
