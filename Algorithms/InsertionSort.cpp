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

int BinarySearch(int* a, int item, int left, int right)
{
    while (right > left) {
        int mid = (right + left) / 2;
        if (item == a[mid]) return mid + 1;
        if (item > a[mid]) left = mid + 1;
        else right = mid - 1;
    }
    
    return (item > a[left]) ? (left + 1) : left;
}

void BinaryInsertionSort(int* a, int n)
{
    int i, index, j, k, selected;
 
    for (i = 1; i < n; i++)
    {
        j = i - 1;
        selected = a[i];
 
        index = BinarySearch(a, selected, 0, j);
 
        while (j >= index)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = selected;
    }
}

// === With Comparisons ===

unsigned long long InsertionSortWithComparisons(int* a, int n)
{
    unsigned long long count = 0;
    int i, j, key;
    for (i = 1; ++count && i < n; i++)
    {
        key = a[i];
        for (j = i; ++count && j > 0 && ++count && key < a[j - 1]; j--)
            a[j] = a[j - 1];

        a[j] = key;
    }

    return count;
}

int BinarySearchWithComparisons(int* a, int item, int left, int right, unsigned long long& count)
{
    while (++count && right > left) {
        int mid = (right + left) / 2;
        if (++count && item == a[mid]) return mid + 1;
        if (++count && item > a[mid]) left = mid + 1;
        else right = mid - 1;
    }
    
    return (++count && item > a[left]) ? (left + 1) : left;
}

unsigned long long BinaryInsertionSortWithComparisons(int* a, int n)
{
    unsigned long long count = 0;
    int i, index, j, k, selected;
 
    for (i = 1; ++count && i < n; i++)
    {
        j = i - 1;
        selected = a[i];
 
        index = BinarySearchWithComparisons(a, selected, 0, j, count);
 
        while (++count && j >= index)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = selected;
    }

    return count;
}