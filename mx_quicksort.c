#include "libmx.h"

static void mx_swap(int *arr, int i, int j, int *swap) {
    int tmp;

    tmp = arr[i];
    arr[i] = arr[j];
    arr[j] = tmp;
    (*swap)++;
}

int mx_quicksort(int *arr, int left, int right) {
    int i = left;
    int j = right;
    int pivot = (left + right) / 2;
    int swap = 0;

    if (!arr)
        return -1;
    if (i < j) {
        for (; arr[i] < arr[pivot]; i++);
        for (; arr[j] > arr[pivot]; j--);
        if (i < j && arr[i] != arr[j])
            mx_swap(arr, i, j, &swap);
        ++i < right ? swap += mx_quicksort(arr, i, right) : i;
        --j > left ? swap += mx_quicksort(arr, left, j) : j;
    }
    return swap;
}
