#include "libmx.h"

int mx_intlen(int n) {
    int i = 0;

    for (;n / 10; i++)
        n /= 10;
    return i;
}
