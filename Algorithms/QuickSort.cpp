#include "Sorts.h"

int findMedianOfThree(int* a, int left, int mid, int right)
{
    if ((a[left] > a[mid]) ^ (a[left] > a[right])) return left;
    if ((a[mid] < a[left]) ^ (a[mid] < a[right])) return mid;
    return right;
}

int findPartition(int* a, int left, int right)
{
    //Median of threes
    int mid = (left + right) / 2;
    int medianIndex = findMedianOfThree(a, left, mid, right);
    if (medianIndex != left)
        Swap(a[medianIndex], a[left]);

    int lastS1 = left;
    int firstUnknown = left + 1;
    int pivot = a[left];

    for (firstUnknown; firstUnknown <= right; firstUnknown++)
        if (a[firstUnknown] < pivot)
            Swap(a[++lastS1], a[firstUnknown]);

    Swap(a[left], a[lastS1]);

    return lastS1;
}

void QuickSort(int* a, int left, int right)
{
    if (left < right) {
        int pivotIndex = findPartition(a, left, right);

        QuickSort(a, left, pivotIndex - 1);
        QuickSort(a, pivotIndex + 1, right);
    }
}

// === With Comparisons ===

int findMedianOfThreeWithComparisons(int* a, int left, int mid, int right, unsigned long long& count)
{
    if (count += 3 && (a[left] > a[mid]) ^ (a[left] > a[right])) return left;
    if (count += 3 && (a[mid] < a[left]) ^ (a[mid] < a[right])) return mid;
    return right;
}

int findPartitionWithComparisons(int* a, int left, int right, unsigned long long& count)
{
    //Median of threes
    int mid = (left + right) / 2;
    int medianIndex = findMedianOfThreeWithComparisons(a, left, mid, right, count);
    if (++count && medianIndex != left)
        Swap(a[medianIndex], a[left]);

    int lastS1 = left;
    int firstUnknown = left + 1;
    int pivot = a[left];

    for (firstUnknown; ++count && firstUnknown <= right; firstUnknown++)
        if (++count && a[firstUnknown] < pivot)
            Swap(a[++lastS1], a[firstUnknown]);

    Swap(a[left], a[lastS1]);

    return lastS1;
}

unsigned long long QuickSortWithComparisons(int* a, int left, int right)
{
    unsigned long long count = 0;

    if (++count < right) {
        int pivotIndex = findPartitionWithComparisons(a, left, right, count);

        count += QuickSortWithComparisons(a, left, pivotIndex - 1);
        count += QuickSortWithComparisons (a, pivotIndex + 1, right);
    }

    return count;
}