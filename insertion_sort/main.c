#include "stdio.h"

void print_int_array(int array[], int length);

int main() {
    // Сортировка вставками
    int array[] = {4, 5, 1, 8, 3, 2, 9, 6};
    int n = 8;

    for (int i = 2; i < n; ++i) {
        int j = i;

        while (j > 0 && array[j - 1] > array[j]) {
            int prev = array[j - 1];
            array[j - 1] = array[j];
            array[j] = prev;

            --j;
        }
    }

    print_int_array(array, n);
}

void print_int_array(int array[], int length) {
    for (int k = 0; k < length; ++k) {
        printf("%d \n", array[k]);
    }
}
