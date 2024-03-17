#pragma once
#include "CTichetAcces.h"

class IMesaj
{
public:
	// getters
	virtual CTichetAcces getTichetAcces()const = 0;
	virtual std::string getContinut()const = 0;

	virtual std::ostream& operator<<(std::ostream& outStream) = 0;
};

