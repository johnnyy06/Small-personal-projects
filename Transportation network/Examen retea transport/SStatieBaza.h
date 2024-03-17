#pragma once
#include <iostream>
#include <string>
#include <queue>
#include "CInfo.h"
#include "CUpdate.h"
#include "CTichetAcces.h"

class SStatieBaza
{
private:
	static SStatieBaza* s_Instance;
	std::queue <IMesaj*> mesaje;

	SStatieBaza() {}

	SStatieBaza(const SStatieBaza& other) = delete;
	SStatieBaza& operator=(const SStatieBaza& other) = delete;

	SStatieBaza(SStatieBaza&& other) = delete;
	SStatieBaza& operator=(SStatieBaza&& other) = delete;
public:
	static SStatieBaza* s_getInstance();

	void stocheaza(CTichetAcces* newTichet ,const std::string& newContinut, const std::string& newProprietar);
};

