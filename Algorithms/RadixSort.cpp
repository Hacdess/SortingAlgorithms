#include "Sorts.h"

void CountingSortForRadix(int* a, int n, int exp)
{
    int Freq[10] = {0};

    int i;
    for (i = 0; i < n; i++)
        Freq[(a[i] / exp) % 10]++;

    for (i = 1; i < 10; i++)
        Freq[i] += Freq[i - 1];

    int* Output = new int[n];
    for (int i = n - 1; i > -1; i--)
        Output[--Freq[(a[i] / exp) % 10]] = a[i];

    for (int i = 0; i < n; i++)
        a[i] = Output[i];
    
    delete[] Output;
}


void RadixSort(int* a, int n)
{
    int max = FindMax(a, n), exp;

    for (exp = 1; max / exp > 0; exp *= 10)
        CountingSortForRadix(a, n, exp);
}

// === With Comparisons ===

unsigned long long CountingSortForRadixWithComparisons(int* a, int n, int exp)
{
    unsigned long long count = 0;

    int Freq[10] = {0};

    int i;
    for (i = 0; ++count && i < n; i++)
        Freq[(a[i] / exp) % 10]++;

    for (i = 1; ++count && i < 10; i++)
        Freq[i] += Freq[i - 1];

    int* Output = new int[n];
    for (int i = n - 1; ++count && i > -1; i--)
        Output[--Freq[(a[i] / exp) % 10]] = a[i];

    for (int i = 0; ++count && i < n; i++)
        a[i] = Output[i];
    
    delete[] Output;

    return count;
}


unsigned long long RadixSortWithComparisons(int* a, int n)
{
    unsigned long long count = 0;

    int max = FindMaxWithComparisons(a, n, count), exp;

    for (exp = 1; ++count && max / exp > 0; exp *= 10)
        count += CountingSortForRadixWithComparisons(a, n, exp);

    return count;
}