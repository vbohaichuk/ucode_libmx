#include "libmx.h"

char *mx_strtrim(const char *str) {
    if(!str)
        return NULL;
    char *copy = mx_strnew(mx_strlen(str));
    int j = 0, i = 0;
    while(str) {
        if(mx_isspace(str[i]) == 1)
            i++;
        if(mx_isspace(str[i]) == 0) {
            copy[j] = str[i];
            j++;
            i++;
        }
    }
    return copy;
}
