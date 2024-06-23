#include "Sorts.h"

void ShakerSort(int* a, int n)
{
    bool swapped = 1;
    int start = 0; int end = n - 1;
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