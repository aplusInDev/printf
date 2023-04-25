#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

#define DATA_TYPE

int _length_mods(const char *s, int j);

#if H_FLAG
	#define DATA_TYPE short
#elif HH_FLAG
	#define DATA_TYPE short
#elif L_FLAG
	#define DATA_TYPE long
#endif
/**
 * struct format - structure
 * @conv_spec: conversion specifier
 * @f: function to be executed
 */
typedef struct format
{
	char conv_spec;
	int (*f)(va_list, char, int);
} format_l;
int _printf(const char *format, ...);
int call_funcs(format_l *conversion,
		va_list conv, const char *format);
int format_checker(const char *format, int *i, int *j,
		va_list conv, format_l *conversion);
int _field_width(const char *s, int j);

int _putchar(char c);

int _strlen(const char *s);
int _strrev(char *s, int i);

int _to_flag(const char *s, int j);

int to_char(va_list conv, char f, int w);
int to_percent(va_list conv, char f, int w);
int to_string(va_list conv, char f, int w);
int to_integer(va_list conv, char f, int w);
int to_b(va_list conv, char f, int w);
int to_u(va_list conv, char f, int w);
int to_o(va_list conv, char f, int w);
int to_x(va_list conv, char f, int w);
int to_X(va_list conv, char f, int w);
int to_S(va_list conv, char f, int w);
int to_p(va_list conv, char f, int w);
int to_r(va_list conv, char f, int w);
int to_R(va_list conv, char f, int w);

#endif
