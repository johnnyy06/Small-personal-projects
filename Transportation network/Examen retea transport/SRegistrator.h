#pragma once
#include "CCertificatInregistrare.h"

class SRegistrator
{
	static SRegistrator* s_Instance;
	int RID;

	SRegistrator(const int newRID) :RID(newRID) {}

	SRegistrator(const SRegistrator& other) = delete;
	SRegistrator& operator=(const SRegistrator& other) = delete;

	SRegistrator(SRegistrator&& other) = delete;
	SRegistrator& operator=(SRegistrator&& other) = delete;
public:
	static SRegistrator* s_getInstance(const int newRID);

	CCertificatInregistrare giveCertificatInregistrare(const CCerereInregistrare& cerere);

	~SRegistrator();
};

