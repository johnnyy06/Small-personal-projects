#include "SAlarma.h"

SAlarma* SAlarma::s_Instance = nullptr;

SAlarma* SAlarma::s_getInstance(const int newID, const std::string& newProprietar, const int newNrFirma, const std::string& newParola)
{
    if (s_Instance == nullptr)
    {
        s_Instance = new SAlarma(newID, newProprietar, newNrFirma, newParola);
    }

    return s_Instance;
}

void SAlarma::doJob(const bool on)
{

}

void SAlarma::print()
{
    std::cout << *this;
}

std::string SAlarma::getCaracteristici()
{
    std::string caracteristici;

    caracteristici = "Numar firma: ";
    caracteristici += std::to_string(this->nrFirma);

    caracteristici += "\tParola: ";
    caracteristici += this->parola;

    return caracteristici;
}

std::ostream& operator<<(std::ostream& outStream, SAlarma& other)
{
    outStream << "\tAceasta este alarma video. " << other.getCaracteristici() << "\n\n";

    return outStream;
}
