#include "libmx.h"

char *mx_strstr(const char *haystack, const char *needle) {
    for (int i = 0; i <= mx_strlen(haystack); i++) {
        if(haystack[i] == *needle)
            for(; i <= mx_strlen(haystack) - i - 2; i++)
                mx_printstr(&haystack[i]);
    }
    return 0;
}
