#include "SControlor.h"

SControlor* SControlor::s_Instance = nullptr;

SControlor* SControlor::s_getInstance(const int newCID)
{
	if (s_Instance == nullptr)
	{
		s_Instance = new SControlor(newCID);
	}

	std::cout << "\tS-a creat un controlor. Acesta are rolul de a oferi vehiculelor tichete de acces.\tCID: " << SControlor::s_Instance->CID << "\n\n";

	return s_Instance;
}

CTichetAcces* SControlor::giveTichetAcces(const CCerereAcces& cerere, const std::string& newTip)
{
	return new CTichetAcces(cerere, CID, newTip);
}

SControlor::~SControlor()
{
	if (s_Instance != nullptr)
	{
		delete s_Instance;
		s_Instance = nullptr;
	}
}
