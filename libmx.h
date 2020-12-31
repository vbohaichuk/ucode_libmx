#pragma once 

#include <unistd.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <fcntl.h>
#include <malloc/malloc.h>
#include <stdio.h>

void mx_printchar(char c);
void mx_printstr(const char *s);
int mx_strlen(const char *s);
void mx_print_strarr(char **arr, const char *delim);
void mx_printint(int n);
char *mx_nbr_to_hex(unsigned long nbr);
char *mx_strnew(const int size);
int mx_bubble_sort(int *arr, int size);
char *mx_itoa(int number);   
void mx_swap_char(char *s1, char* s2);
void mx_str_reverse(char *s);
char *mx_strcpy(char *dst, const char *src);
int mx_intlen(int n); // своя функция 
int mx_sqrt(int x);
int mx_strcmp(const char *s1, const char *s2);
int mx_binary_search(char **arr, int size, const char *s, int *count);
char *mx_strdup(const char *s1);
char *mx_strjoin(const char *s1, const char *s2);
char *mx_strcat(char *restrict s1, const char *restrict s2);
char *mx_strncpy(char *dst, const char *src, int len);
char *mx_strndup(const char* s1, size_t n);
int mx_quicksort(int *arr, int left, int right);