#include "ExaminationRequest.h"

void ExaminationRequest::print()
{
	std::cout << "Diagnostic " << this->id << " is an examination request released by " << whoRelease.getName()
		<< " and made by "<< this->doctorName << " on " << releaseDate;
}