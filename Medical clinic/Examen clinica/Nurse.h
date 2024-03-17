#pragma once
#include "Employee.h"
#include "Appointment.h"
#include "MedicalSuggestion.h"
#include "DiagnosticList.h"

class Nurse : public Employee
{
private:
	Diagnostic* pDiagnostic;
public:
	Nurse(std::string newName, std::string newAdress) : Employee(newName, newAdress), pDiagnostic(nullptr) {}

	void			writeDiagnostic(const int ID, const Data& newDate, const Employee& newWhoRelease, const std::vector <std::pair<std::string, int>>& newDrugList); // creaza diagnostic de tip MedicalSuggetion
	Diagnostic*		getDiagnostic()const { return pDiagnostic; } // returneaza diagnostic de tip MedicalSuggetion

	void setAppointment(const Data& newDate, const int duration);

	~Nurse();
};

