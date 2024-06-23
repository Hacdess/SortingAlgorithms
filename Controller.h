#include "./Algorithms/Sorts.h"
#include <cstring>

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

void ReadCommand(int argc, char *argv[]);