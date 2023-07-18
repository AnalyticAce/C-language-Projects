/*
** EPITECH PROJECT, 2022
** my_printflib
** File description:
** my_printflib
*/
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

#ifndef MYPRINTFLIB_H
    #define MYPRINTFLIB_H
    #define SIZE 100
    #define MAX_LINES 1000
typedef struct information {
    double right;
    double left;
    double speed;
    double mid;
} stockinfo;
int my_putstr(char const *str);
int my_putnbr(int nb);
void my_putchar(char c);
int my_strlen(char const *str);
char *my_strcpy(char *dest, char const *src);
void print_o(int nb);
void print_b(int nb);
void print_p(int nb);
void print_hexa(int nb);
void print_x(int nb);
double pfloat(double nb);
unsigned int my_putnbu(unsigned int nb);
int my_printf(const char *format, ...);
char **parsing_string2(char *str, int max_size, char *deli);
void make(char *str);
void displace_k(double gauche, double milieu, double droit, int n);
void make(char *str);
int getlidar_en_double(void);
int make_choise_between(int n, double pos);
#endif
