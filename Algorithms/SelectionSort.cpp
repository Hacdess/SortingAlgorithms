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

// === With Comparisons ===

int findMinIndexWithComparisons(int* a, int start, int end, unsigned long long& count)
{
    int i = start + 1;
    for (i; ++count && i <= end; i++)
        if (++count && a[i] < a[start])
            start = i;

    return start;
}

unsigned long long SelectionSortWithComparisons(int* a, int n)
{
    unsigned long long count = 0;

    int i, min_index, end = n - 1;
    for (i = 0; ++count && i < end; i++) {
        min_index = findMinIndexWithComparisons(a, i, end, count);

        if (++count && i != min_index)
            Swap(a[i], a[min_index]);
    }

    return count;
}