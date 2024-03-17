#include "TestsRequest.h"

void TestsRequest::print()
{
	std::cout << "Diagnostic " << this->id << " is a tests request released by " << whoRelease.getName()
		<< " on " << releaseDate;

	std::cout << "\tMedical Tests: ";
	for (const auto& i : this->nameList)
	{
		std::cout << i<<"\n\t\t";
	}
	std::cout << "\n\n";
}