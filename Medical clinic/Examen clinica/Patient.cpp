#include "Patient.h"

void Patient::setAppointment(const Data& newDate, const int duration)
{
	Appointment app(newDate, duration);
	
	medRecord.addAppointment(app);
}
