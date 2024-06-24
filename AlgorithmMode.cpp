#include "AlgorithmMode.h"

int *AlgorithmMode::ReadFile(char* FileName)
{
    ifstream fin(FileName);
    if (!fin.is_open())
    {
        cout << "Can't open file\n";
        return NULL;
    }

    int n;
    fin >> n;
    fin.ignore();
    int* array = new int[n];

    int i;
    for (i = 0; i < n; i++)
    {
        fin >> array[i];
        fin.ignore();
    }

    return array;
}

void AlgorithmMode::Run(int argc, char *argv[])
{
    // === Print mode ===
    cout << "ALGORITHM MODE\n";
    cout << "Algorithm: ";

    Sort = GetSort(argv[1]);

    // === File Name ===
    if (!isNumber(argv[2]))
    {
        InputArray = ReadFile(argv[2]);
    }

    // === Input Size ===
    else
    {

    }
}