#pragma once
#include <iostream>
#include <fstream>
#include <cmath>
#include <ctime>
#include <chrono>

using namespace std;
using namespace std::chrono;

// ===== SWAP ======
template <class T>

void Swap(T &a, T &b)
{
	T x = a;
	a = b;
	b = x;
}

// ===== DATA GENERATION =====
int* GenerateData(int& n, int& dataType);

// ===== PRINT ARRAY =====
void PrintArray (int* a, int n);

// ===== SELECTION SORT =====
void SelectionSort(int* a, int n);
unsigned long long SelectionSortWithComparisons(int* a, int n);

// ===== INSERTION SORT =====
void InsertionSort(int* a, int n);
unsigned long long InsertionSortWithComparisons(int* a, int n);

// ===== SHELL SORT =====
void ShellSort(int* a, int n);
unsigned long long ShellSortWithComparisons(int* a, int n);

// ===== BUBBLE SORT =====
void BubbleSort(int* a, int n);
unsigned long long BubbleSortWithComparisons(int *a, int n);

// ===== HEAP SORT =====
void HeapSort(int* a, int n);
unsigned long long HeapSortWithComparison(int* a, int n);

// ===== MERGE SORT =====
void MergeSort(int* a, int left, int right);
unsigned long long MergeSortWithComparisons(int* a, int left, int right);

// ===== QUICK SORT =====
void QuickSort(int* a, int left, int right);
unsigned long long QuickSortWithComparisons(int* a, int left, int right);

// ===== COUNTING SORT =====
int FindMax(int* a, int n);
void CountingSort(int* a, int n);
int FindMaxWithComparisons(int* a, int n, unsigned long long& count);
unsigned long long CountingSortWithComparisons(int* a, int n);

// ===== RADIX SORT =====
void RadixSort(int* a, int n);
unsigned long long RadixSortWithComparisons(int* a, int n);

// ===== SHAKER SORT =====
void ShakerSort(int* a, int n);
unsigned long long ShakerSortWithComparisons(int* a, int n);

// ===== BINARY INSERTION SORT =====
void BinaryInsertionSort(int* a, int n);
unsigned long long BinaryInsertionSortWithComparisons(int* a, int n);

// ===== COPY ARRRAY =====
int* CopyArray(int* a, int n);