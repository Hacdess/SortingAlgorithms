#include "Sorts.h"

//-------------------------------------------------

// This function generates a random array
int* GenerateRandomData(int& n)
{
	cout << "Input number of elements: ";
	cin >> n;
	if (n < 1) return NULL;

	srand((unsigned int)time(NULL));


	int* a = new int[n];

	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % n;
	}

	return a;
}

// This function generates a sorted array (ascending order)
int* GenerateSortedData(int& n)
{
	cout << "Input number of elements: ";
	cin >> n;
	if (n < 1) return NULL;

	int* a = new int[n];

	for (int i = 0; i < n; i++)
		a[i] = i;

	return a;
}

// This function generates a reverse-sorted array (descending order)
int* GenerateReverseData(int& n)
{
	cout << "Input number of elements: ";
	cin >> n;
	if (n < 1) return NULL;

	int* a = new int[n];

	for (int i = 0; i < n; i++)
		a[i] = n - 1 - i;

	return a;
}

// This function generates a nearly-sorted array
int* GenerateNearlySortedData(int& n)
{
	cout << "Input number of elements: ";
	cin >> n;
	if (n < 1) return NULL;

	int* a = new int[n];

	for (int i = 0; i < n; i++)
		a[i] = i;

	srand((unsigned int) time(NULL));
	
	for (int i = 0; i < 10; i ++)
	{
		int r1 = rand() % n;
		int r2 = rand() % n;
		Swap(a[r1], a[r2]);
	}

	return a;
}

int* GenerateData(int& n, int& dataType)
{
	cout << "Input data Type: ";
	cin >> dataType;

	int* a;

	switch (dataType)
	{
	case 0:	
		a = GenerateRandomData(n);
		break;
	case 1:	
		a = GenerateSortedData(n);
		break;
	case 2:	
		a = GenerateReverseData(n);
		break;
	case 3:	
		a = GenerateNearlySortedData(n);
		break;
	default:
		printf("Error: unknown data type!\n");
	}

	return a;
}

// This function prints an array
void PrintArray (int* a, int n)
{
    cout << "Array: ";

    for (int i = 0; i < n; i ++)
        cout << a[i] << ' ';
}

// This function copys an array
int* CopyArray (int* a, int n)
{
	if (n < 1) return NULL;

	int* result = new int[n];
    for (int i = 0; i < n; i ++)
        result[i] = a[i];

	return result;
}