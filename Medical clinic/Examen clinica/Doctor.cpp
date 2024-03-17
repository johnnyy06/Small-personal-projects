#include "Doctor.h"

void Doctor::writeDiagnostic(DiagnosticList type, const int newID, const Data& newDate, const Employee& newWhoRelease, std::vector<std::string> newTestsList)
{
	if (type == EXAMINATION_REQUEST)
	{
		pDiagnostic = new ExaminationRequest(newID, newDate, newWhoRelease, this->name);
	}

	if (type == TESTS_REQUEST)
	{
		pDiagnostic = new TestsRequest(newID, newDate, newWhoRelease, newTestsList);
	}
}

void Doctor::setAppointment(const Data& newDate, const int duration)
{
	// to do
}
