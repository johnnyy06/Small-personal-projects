#pragma once
#include "Appointment.h"
#include "Diagnostic.h"
#include <deque>

class MedicalRecords
{
private:
	std::vector <Appointment> appointments;
	std::deque <Diagnostic*> diagnostics;
public:
	MedicalRecords() {}

	void	addAppointment(Appointment newAppointment);
	void	addDiagnostic(Diagnostic* newDiagnostic);

	void	printInformations();
};

