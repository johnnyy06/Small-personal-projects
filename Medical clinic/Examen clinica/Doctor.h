#pragma once
#include "Employee.h"
#include "Appointment.h"
#include "ExaminationRequest.h"
#include "TestsRequest.h"
#include "DiagnosticList.h"


class Doctor : public Employee
{
protected:
	Diagnostic* pDiagnostic;
public:
	Doctor(std::string newName, std::string newAdress) : Employee(newName, newAdress), pDiagnostic(nullptr) {}

	void writeDiagnostic(DiagnosticList type, const int newID, const Data& newDate, const Employee& newWhoRelease, std::vector <std::string> newTestsList = { "" });// creaza diagnostic ExaminationRequest sau TestsRequest
	Diagnostic* getDiagnostic()const { return pDiagnostic; }// creaza diagnostic ExaminationRequest sau TestsRequest

	virtual void setAppointment(const Data& newDate, const int duration);
};

