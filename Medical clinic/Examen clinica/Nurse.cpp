#include "Nurse.h"

void Nurse::writeDiagnostic(const int ID, const Data& newDate, const Employee& newWhoRelease, const std::vector<std::pair<std::string, int>>& newDrugList)
{
	pDiagnostic = new MedicalSuggestion(ID, newDate, newWhoRelease, newDrugList);
}

void Nurse::setAppointment(const Data& newDate, const int duration)
{
	// to do
}

Nurse::~Nurse()
{
	if (pDiagnostic)
	{
		delete pDiagnostic;
		pDiagnostic = nullptr;
	}
}
