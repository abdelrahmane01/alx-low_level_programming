#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

int _putchar(char a);
void print_alphabet(void);
void print_alphabet_x10(void);
int _islower(int c);
int _isalpha(int c);
int print_sign(int n);
int _abs(int);
int print_last_digit(int);
void jack_bauer(void);
int add(int, int);
void print_to_98(int n);
void times_table(void);
void print_times_table(int n);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *);
char *cap_string(char *);
char *leet(char *);
void print_number(int n);
char *rot13(char *);

#endif
