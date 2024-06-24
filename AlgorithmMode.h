#include "GeneralUse.h"

class AlgorithmMode
{
private:
    SortingAlgorithm Sort = SortingAlgorithm::NONE;

    int size;

    int* InputArray = NULL;
    int* RandomArray = NULL;
    int* NSortedArray = NULL;
    int* SortedArray = NULL;
    int* ReversedArray = NULL;

    string Parameter;
    string FileName = "";
    unsigned long long Comparisons = 0;
    
public:

    int* ReadFile(char* FileName);
    void Run(int argc, char *argv[]);
};


