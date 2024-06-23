#include "Sorts.h"

void ShellSort(int* a, int n) {
    int i, j, gap, temp;

    for (gap = n / 2; gap > 0; gap /= 2) {
        for (i = gap; i < n; i++)

        temp = a[i];

        for (j = i; j >= gap && a[j - gap] > temp; j -= gap)
            a[j] = a[j - 1];

        a[j] = temp;
    }
}