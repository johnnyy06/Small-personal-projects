#pragma once
#include "ADispozitiv.h"

class CTastatura : public ADispozitiv
{
public:
	void			doJob(const bool on)override;
	void			print()override;

	//getters
	std::string		getDispozitiv()const { return "tastatura"; }
	std::string		getCaracteristici()override;

	friend std::ostream& operator <<(std::ostream& outStream, CTastatura& other);
};

std::ostream& operator <<(std::ostream& outStream, CTastatura& other);