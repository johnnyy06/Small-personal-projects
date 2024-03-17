#pragma once
#include "AMesaj.h"

class CUpdate : public AMesaj
{
private:
	std::string epochTime;
public:
	CUpdate(const CTichetAcces& newTichetAcces, const std::string& newContinut, const std::string& newEpochTime)
		: AMesaj(newTichetAcces, newContinut), epochTime(newEpochTime) {}

	std::ostream& operator<<(std::ostream& outStream);
};

