#include "Sorts.h"

void HeapRebuild(int* a, int n, int pos)
{
    int i;
    bool isHeap = 0;
    while (!isHeap && 2 * pos + 1 < n)
    {
        i = 2 * pos + 1;
        if (i < n - 1 && a[i] < a[i + 1])
            i++;
        
        if (a[pos] < a[i]) {
            Swap(a[pos], a[i]);
            pos = i;
        }

        else isHeap = 1;
    }
}

void HeapConstruct(int* a, int n)
{
    int pos = n / 2 - 1;
    for (pos; pos > -1; pos--)
        HeapRebuild(a, n, pos);
}

void HeapSort(int* a, int n) {
    HeapConstruct(a, n);
    n--;

    while (n > 0)
    {
        Swap(a[0], a[n]);
        HeapRebuild(a, n, 0);
        n--;
    }
}