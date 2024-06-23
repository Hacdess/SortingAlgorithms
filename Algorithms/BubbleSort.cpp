#include "Sorts.h"

void BubbleSort(int *a, int n)
{
    int i, j;
    bool swapped;

    for (i = 0; i < n - 1; i++) {
        swapped = 0;

        for (j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                Swap(a[j], a[j + 1]);
                swapped = 1;
            }
        }

        if (!swapped) break;
    }
}
