#include "libmx.h"

char *mx_strndup(const char *s1, size_t n) {
    char *res = NULL;
    size_t size;

    if (s1 == NULL && n == 0)
        return mx_strnew(0);
    size = (unsigned int) mx_strlen(s1);
    
    if (size < n)
        res = mx_strdup(s1);
    else {
        res = mx_strnew(n);
        res = mx_strncpy(res, s1, n);
    }
    return res;
}
