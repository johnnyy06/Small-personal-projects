#pragma once
#include "CTichetAcces.h"

class SControlor
{
private:
	static SControlor* s_Instance;
	int CID;

	SControlor(const int newCID) : CID(newCID) {}

	SControlor(const SControlor& other) = delete;
	SControlor& operator=(const SControlor& other) = delete;

	SControlor(SControlor&& other) = delete;
	SControlor& operator=(SControlor&& other) = delete;
public:
	static SControlor* s_getInstance(const int newCID);

	CTichetAcces* giveTichetAcces(const CCerereAcces& cerere, const std::string& newTip);

	~SControlor();
};

