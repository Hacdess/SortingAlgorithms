#include "./Algorithms/Sorts.h"
#include <cstring>
#include <string>
#include <fstream>

enum SortingAlgorithm 
{
    SELECTION_SORT,
    INSERTION_SORT,
    SHELL_SORT,
    BUBBLE_SORT,
    HEAP_SORT,
    MERGE_SORT,
    QUICK_SORT,
    RADIX_SORT,
    COUNTING_SORT,
    BINARY_INSERTION_SORT,
    SHAKER_SORT,
    FLASH_SORT,
    NONE
};

enum InputOrder
{
    RAND,
    NSORTED,
    SORTED,
    REV,
    NONE
};

enum OutputParameter
{
    TIME,
    COMP,
    BOTH,
    NONE
};

SortingAlgorithm GetSort(char* argv);
bool isNumber(char* argv);
string SortingAlgorithmToString(SortingAlgorithm algo);
string OrderToString(InputOrder order);
string ParameterToString(OutputParameter para);