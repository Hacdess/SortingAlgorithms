#include "AlgorithmMode.h"

int *AlgorithmMode::ReadFile(char* FileName)
{
    ifstream fin(FileName);
    if (!fin.is_open())
    {
        cout << "Can't open file\n";
        return NULL;
    }

    fin >> size;
    fin.ignore();
    int* array = new int[size];

    int i;
    for (i = 0; i < size; i++)
    {
        fin >> array[i];
        fin.ignore();
    }

    fin.close();
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
        cout << SortingAlgorithmToString(Sort) << endl;
        cout << "Input file: " << argv[2] << endl;
        InputArray = ReadFile(argv[2]);
        cout << "Input size: " << size << endl;
        
        cout << "-------------------------\n";
    }

    // === Input Size ===
    else
    {

    }
}