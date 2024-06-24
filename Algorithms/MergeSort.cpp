#include "Sorts.h"

void Merge(int* a, int left, int mid, int right)
{
    int startLeft = left, startRight = mid + 1;

    int* temp = new int[right - left + 1];

    int pos = 0;

    while (startLeft <= mid && startRight <= right)
    {
        if (a[startLeft] < a[startRight])
            temp[pos++] = a[startLeft++];
        else
            temp[pos++] = a[startRight++];
    }

    while (startLeft <= mid)
        temp[pos++] = a[startLeft++];

    while (startRight <= right)
        temp[pos++] = a[startRight++];

    int i;
    for (i = 0; i < pos; i++)
        a[i + left] = temp[i];

    delete[] temp;
}

void MergeSort(int* a, int left, int right)
{
    if (left < right)
    {
        int mid = (left + right) / 2;
        MergeSort(a, left, mid);
        MergeSort(a, mid + 1, right);
        Merge(a, left, mid, right);
    }
}

// === With Comparisons ===

unsigned long long MergeWithComparisons(int* a, int left, int mid, int right)
{
    unsigned long long count = 0;

    int startLeft = left, startRight = mid + 1;

    int* temp = new int[right - left + 1];

    int pos = 0;

    while (++count && startLeft <= mid && ++count && startRight <= right)
    {
        if (++count && a[startLeft] < a[startRight])
            temp[pos++] = a[startLeft++];
        else
            temp[pos++] = a[startRight++];
    }

    while (++count && startLeft <= mid)
        temp[pos++] = a[startLeft++];

    while (++count && startRight <= right)
        temp[pos++] = a[startRight++];

    int i;
    for (i = 0; ++count && i < pos; i++)
        a[i + left] = temp[i];

    delete[] temp;
}

unsigned long long MergeSortWithComparisons(int* a, int left, int right)
{
    unsigned long long count = 0;

    if (++count && left < right)
    {
        int mid = (left + right) / 2;
        count += MergeSortWithComparisons(a, left, mid);
        count += MergeSortWithComparisons(a, mid + 1, right);
        count += MergeWithComparisons(a, left, mid, right);
    }

    return count;
}