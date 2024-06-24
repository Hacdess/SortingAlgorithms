#include "GeneralUse.h"

SortingAlgorithm GetSort(char *argv)
{
    if (strcmp(argv, "selection-sort") == 0)
        return SELECTION_SORT;
    if (strcmp(argv, "insertion-sort") == 0)
        return INSERTION_SORT;
    if (strcmp(argv, "shell-sort") == 0)
        return SHELL_SORT;
    if (strcmp(argv, "bubble-sort") == 0)
        return BUBBLE_SORT;
    if (strcmp(argv, "heap-sort") == 0)
        return HEAP_SORT;
    if (strcmp(argv, "merge-sort") == 0)
        return MERGE_SORT;
    if (strcmp(argv, "quick-sort") == 0)
        return QUICK_SORT;
    if (strcmp(argv, "radix-sort") == 0)
        return RADIX_SORT;
    if (strcmp(argv, "counting-sort") == 0)
        return COUNTING_SORT;
    if (strcmp(argv, "binary-insertion-sort") == 0)
        return BINARY_INSERTION_SORT;
    if (strcmp(argv, "shaker-sort") == 0)
        return SHAKER_SORT;
    if (strcmp(argv, "flash-sort") == 0)
        return FLASH_SORT;
    return SortingAlgorithm::NONE;
}

bool isNumber(char *argv)
{
    int len = strlen(argv);

    int i;
    for (i = 0; i < len; i++)
        if (!isdigit(argv[i]))
            return 0;

    return 1;
}

string SortingAlgorithmToString(SortingAlgorithm algo)
{
    switch (algo)
    {
    case SELECTION_SORT:
        return "Selection Sort";
    case INSERTION_SORT:
        return "Insertion Sort";
    case SHELL_SORT:
        return "Shell Sort";
    case BUBBLE_SORT:
        return "Bubble Sort";
    case HEAP_SORT:
        return "Heap Sort";
    case MERGE_SORT:
        return "Merge Sort";
    case QUICK_SORT:
        return "Quick Sort";
    case RADIX_SORT:
        return "Radix Sort";
    case COUNTING_SORT:
        return "Counting Sort";
    case BINARY_INSERTION_SORT:
        return "Bianry Insertion Sort";
    case SHAKER_SORT:
        return "Shaker Sort";
    case FLASH_SORT:
        return "Flash Sort";
    case SortingAlgorithm::NONE:
        return "None";
    default:
        return "Unknown Algorithm";
    }
}

string OrderToString(InputOrder order)
{
    switch (order)
    {
    case RAND:
        return "Random";
    case NSORTED:
        return "Nearly Sorted";
    case SORTED:
        return "Sorted";
    case REV:
        return "Reversed";
    case InputOrder::NONE:
        return "None";
    default:
        return "Unknown Order";
    }
}

string ParameterToString(OutputParameter para)
{
    switch (para)
    {
    case TIME:
        return "Time";
    case COMP:
        return "Comparisons";
    case BOTH:
        return "Both";
    case OutputParameter::NONE:
        return "None";
    default:
        return "Unknown Parameter";
    }
}

void WriteFile(string FileName, int* a, int n)
{
    ofstream fout(FileName);
    if (!fout.is_open())
    {
        cout << "Can't open file\n";
        return;
    }

    fout << n << endl;
    int i;
    
    for (i = 0; i < n - 1; i++)
        cout << a[i] << ' ';
    
    cout << a[i];

    fout.close();
}