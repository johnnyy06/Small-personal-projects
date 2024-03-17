#pragma once
#include "Data.h"

class IPerson
{
public:
	virtual void setAppointment(const Data& newDate, const int duration) = 0;
};

