#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

BUFFER_SIZE 1024

ssize_t write(int fd, const void *buf, size_t count);
void *malloc(size_t size);
void free(void *ptr);
void *calloc(size_t nmemb, size_t size);
void *realloc(void *ptr, size_t size);
void *reallocarray(void *ptr, size_t nmemb, size_t size);
void va_start(va_list ap, last);
type va_arg(va_list ap, type);
void va_end(va_list ap);
void va_copy(va_list dest, va_list src);
char *utoa_binary(unsigned int num);
int _printf(const char *format, va_list args);
size_t strlen(const char *s);

#endif
