#include "libmx.h"

int mx_bubble_sort(int *arr, int size) {
    int copy;
    int count = 0;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                    copy = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = copy;
                    count++;
            }
        }
    }
        return count;
}