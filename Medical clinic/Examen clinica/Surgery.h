#pragma once
#include "Appointment.h"

class Surgery : public Appointment
{
private:
	std::string type; // posibil sa nu fie neaparat string, poate e enum
	int recoveryTime;
public:

};

