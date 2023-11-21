#ifndef VARIADIC_FUNCTIONS
#define VARIADIC_FUNCTIONS

#include<stdarg.h>
#include<stdio.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void convert_char(va_list argm);
void convert_int(va_list argm);
void convert_float(va_list argm);
void convert_string(va_list argm);
void print_all(const char *const format, ...);
#endif
