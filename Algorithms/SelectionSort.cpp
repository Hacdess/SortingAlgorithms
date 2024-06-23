#include "Sorts.h"

int findMinIndex(int* a, int start, int end) {
    int i = start + 1;
    for (i; i <= end; i++)
        if (a[i] < a[start])
            start = i;

    return start;
}

void SelectionSort(int* a, int n) {
    int i, min_index, end = n - 1;
    for (i = 0; i < end; i++) {
        min_index = findMinIndex(a, i, end);

        if (i != min_index)
            Swap(a[i], a[min_index]);
    }
}