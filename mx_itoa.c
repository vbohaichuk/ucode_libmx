#include "libmx.h"

char *mx_itoa(int number) {   
    int len = mx_intlen(number);

    if(number == -2147483648)
        return "-2147483648";
    if(number < 0) {
        number *= -1;
        len++;
    }
    char *res = mx_strnew(len);

    for (int i = 0; number != 0; i++) {
        res[i] = number % 10 + '0';
        number /= 10;
    }
    mx_str_reverse(res);
    return res;
}
