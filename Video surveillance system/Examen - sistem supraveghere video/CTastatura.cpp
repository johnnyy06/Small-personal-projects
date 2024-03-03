#include "CTastatura.h"
#include <fstream>

void CTastatura::doJob(const bool on)
{
    std::ifstream file("parola.txt");

    std::string newParola;

    file >> newParola;
}

void CTastatura::print()
{
    std::cout << *this;
}

std::string CTastatura::getCaracteristici()
{
    std::string caracteristici;

    caracteristici = "Tastatura simpla";

    return caracteristici;
}

std::ostream& operator<<(std::ostream& outStream, CTastatura& other)
{
    outStream << "\tAceasta este o tastatura video. " << other.getCaracteristici() << "\n\n";

    return outStream;
}
