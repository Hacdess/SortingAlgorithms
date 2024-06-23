#include "Sorts.h"

int FindMax(int* a, int n)
{
    int max = a[0], i;

    for (i = 1; i < n; i++)
        if (a[i] > max)
            max = i;
    
    return max;
}

void CountingSort(int* a, int n)
{
    if (n < 2) return;

    int Max = FindMax(a, n);

    int* FreqArray = new int[++Max];

    int i;
    for (i = 0; i < Max; i++)
        FreqArray[i] = 0;

    for (i = 0; i < n; i++)
        FreqArray[a[i]]++;

    for (i = 1; i < Max; i++)
        FreqArray[i] += FreqArray[i - 1];

    int* ResArray = new int[n];
    for (i = 0; i < n; i++)
        ResArray[--FreqArray[a[i]]] = a[i];

    for (i = 0; i < n; i++)
        a[i] = ResArray[i];

    delete[] FreqArray;
    delete[] ResArray;
}