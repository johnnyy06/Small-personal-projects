#include "Clinique.h"

Clinique* Clinique::s_Instance = nullptr;

Clinique* Clinique::s_getInstance()
{
	if (s_Instance == nullptr)
	{
		s_Instance = new Clinique();
	}

	return s_Instance;
}
