#include "CCerereAcces.h"

CCerereAcces::CCerereAcces(const int newID, const std::string& newCategorie, const CCertificatInregistrare& newCertificat) : ID(newID), categorieVehicul(newCategorie)
{
	this->cod = newCertificat.getCod();
}
