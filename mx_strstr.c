#include "libmx.h"

char *mx_strstr(const char *haystack, const char *needle) {
    char *haystack_c = (char *)haystack;
    char *needle_c = (char *)needle;

    if ((!haystack) || (!needle))
        return NULL;
    if (!mx_strlen(needle))
        return haystack_c;
    while (*haystack_c) {
        if (!mx_strncmp(haystack_c, needle_c, mx_strlen(needle_c)))
            return haystack_c;
        haystack_c++;
    }
    return NULL;
}
