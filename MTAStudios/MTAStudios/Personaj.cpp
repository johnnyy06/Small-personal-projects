#include "Personaj.h"

void Personaj::addReplica(const std::string& newReplica)
{
	this->replici.push_back(newReplica);
}

void Personaj::setTip(const std::string& newTip)
{
	this->tip = newTip;
}
