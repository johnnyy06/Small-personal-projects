#include "MedicalSuggestion.h"

void MedicalSuggestion::print()
{
	std::cout << "Diagnostic " << this->id << " is a medical suggestion released by " << whoRelease.getName()
		<< " on " << releaseDate;
	std::cout << "The following medicamentation is prescribed: ";
	for (const auto& i : this->drugList)
	{
		std::cout << i.first << " dose: " << i.second << "\n\t\t";
	}
	std::cout << "\n\n";
}
