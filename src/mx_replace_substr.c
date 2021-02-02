#include "libmx.h"

char *mx_replace_substr(const char *str, const char *sub, const char *replace) {
    char *res = NULL;
    int len;
    int j = 0;

    if (!str || !sub || !replace)
        return NULL;
    len = mx_count_substr(str, sub);
    res = mx_strnew(mx_strlen(str) +
                    ((mx_strlen(replace)) - (mx_strlen(sub))) * len);
    for (int i = 0; str[j]; ) {
        if (mx_strncmp(&str[j], sub, mx_strlen(sub)) == 0) {
            mx_strcat(res, replace);
            i += mx_strlen(replace);
            j += mx_strlen(sub);
        }
        else
            res[i++] = str[j++];
    }
    return res;
}
