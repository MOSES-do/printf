#ifndef MAIN_H
#define MAIN_H


#include <stdarg.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <limits.h>


int _putchar(char c);
int _printf(const char *format, ...);
void printCh(char ch);
int printStr(va_list arg);


#endif
