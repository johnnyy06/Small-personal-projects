#include "MedicalRecords.h"

void MedicalRecords::addAppointment(Appointment newAppointment)
{
	appointments.push_back(newAppointment);
}

void MedicalRecords::addDiagnostic(Diagnostic* newDiagnostic)
{
	diagnostics.push_back(newDiagnostic);
}

void MedicalRecords::printInformations()
{
	std::cout << "\tMedical records:\n\tAppointments: ";

	/*for (const auto& i : this->appointments)
	{

	}*/

}
