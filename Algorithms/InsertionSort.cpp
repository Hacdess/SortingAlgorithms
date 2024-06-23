#include "Sorts.h"

void InsertionSort(int* a, int n)
{
    int i, j, key;
    for (i = 1; i < n; i++)
    {
        key = a[i];
        for (j = i; j > 0 && key < a[j - 1]; j--)
            a[j] = a[j - 1];

        a[j] = key;
    }
}

int RecursiveBinarySearch(int* a, int item, int low, int high)
{
    if (high <= low)
        return (item > a[low]) ? (low + 1) : low;
 
    int mid = (low + high) / 2;
 
    if (item == a[mid]) return mid + 1;
    if (item > a[mid]) return RecursiveBinarySearch(a, item, mid + 1, high);
    return RecursiveBinarySearch(a, item, low, mid - 1);
}

void BinaryInsertionSort(int* a, int n)
{
    int i, index, j, k, selected;
 
    for (i = 1; i < n; i++)
    {
        j = i - 1;
        selected = a[i];
 
        index = RecursiveBinarySearch(a, selected, 0, j);
 
        while (j >= index)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = selected;
    }
}