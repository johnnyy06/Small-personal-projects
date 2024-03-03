#pragma once
#include <iostream>
#include <string>

class IDispozitiv
{
public:
	// getters
	virtual int				getID()const = 0;
	virtual std::string		getProducator()const = 0;
	virtual std::string		getDispozitiv()const = 0;
	virtual std::string		getCaracteristici() = 0;

	virtual void			doJob(const bool on) = 0;
	virtual void			print() = 0;
};