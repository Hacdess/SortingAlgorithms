#include "Controller.h"

int main(int argc, char *argv[])
{
    while (argc < 1) {
        cout << "Input command again: ";
        return -1;
    }

    ReadCommand(argc, argv);

    return 0;
}