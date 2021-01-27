#pragma once 

#include <unistd.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <fcntl.h>
#include <malloc/malloc.h>
#include <stdio.h>

typedef struct s_list {
    void *data;
    struct s_list *next;
    }          t_list;

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
double mx_pow(double n, unsigned int pow);
unsigned long mx_hex_to_nbr(const char *hex);
void mx_foreach(int *arr, int size, void (*f)(int));
void mx_print_unicode(wchar_t c);
void mx_strdel(char **str);
void mx_del_strarr(char ***arr);
char *mx_strstr(const char *haystack, const char *needle);
int mx_strncmp(const char *s1, const char *s2, int n);
int mx_count_words(const char *str, char c);
int mx_count_substr(const char *str, const char *sub);
int mx_get_char_index(const char *str, char c);
bool mx_isspace(char c);
char *mx_strtrim(const char *str);
t_list *mx_create_node(void *data);