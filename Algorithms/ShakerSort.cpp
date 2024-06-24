#include "Sorts.h"

void ShakerSort(int* a, int n)
{
    bool swapped = 1;
    int start = 0, end = n - 1;
    int i;

    while (swapped) {
        swapped = 0;

        for (i = start; i < end; i++)
            if (a[i] > a[i + 1]) {
                Swap(a[i], a[i + 1]);
                swapped = 1;
            }
        end--;

        if (!swapped) break;

        swapped = 0;
        for (i; i > start; i--)
            if (a[i - 1] > a[i]) {
                Swap(a[i - 1], a[i]);
                swapped = 1;
            }
        start++;
    }
}

// === With Comparisons ===
unsigned long long ShakerSortWithComparisons(int* a, int n)
{
    unsigned long long count = 0;

    bool swapped = 1;
    int start = 0, end = n - 1;
    int i;

    while (++count && swapped) {
        swapped = 0;

        for (i = start; ++count && i < end; i++)
            if (++count && a[i] > a[i + 1]) {
                Swap(a[i], a[i + 1]);
                swapped = 1;
            }
        end--;

        if (++count && !swapped) break;

        swapped = 0;
        for (i; ++count && i > start; i--)
            if (++count && a[i - 1] > a[i]) {
                Swap(a[i - 1], a[i]);
                swapped = 1;
            }
        start++;
    }

    return count;
}