#include "IDGenerator.h"

IDGenerator* IDGenerator::s_Instance = nullptr;

IDGenerator* IDGenerator::s_getInstance()
{
    if (s_Instance == nullptr)
    {
        s_Instance = new IDGenerator();
    }

    std::cout << "\tS-a creat un generator. Acesta are rolul de a genera numere unice.\n\n";

    return s_Instance;
}

int IDGenerator::getID()
{
    int temp_ID = ID;
    ID += 3;

    return temp_ID;
}
