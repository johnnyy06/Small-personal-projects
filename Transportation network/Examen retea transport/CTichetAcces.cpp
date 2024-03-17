#include "CTichetAcces.h"

std::ostream& operator<<(std::ostream& outStream, const CTichetAcces& other)
{
    outStream << "\tVehiculul " << other.ID << " de categorie " << other.categorieVehicul<<" detine tichet de acces.\n";

    return outStream;
}

CTichetAcces::CTichetAcces(const CCerereAcces& cerere, const int newCID, const std::string newTip)
{
    this->ID = cerere.getID();
    this->categorieVehicul = cerere.getCategorieVehicul();
    this->CID = newCID;
    this->tip = newTip;
}
