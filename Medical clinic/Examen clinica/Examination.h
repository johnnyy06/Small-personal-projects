#pragma once
#include "Appointment.h"
#include <string>

class Examination : public Appointment
{
private:
	std::string reason;
public:
};

