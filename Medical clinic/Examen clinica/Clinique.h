#pragma once
#include <iostream>
#include <string>
#include <vector>

class Clinique
{
private:
	static Clinique* s_Instance;
	Clinique() {}
	Clinique(const Clinique& other) = delete;
public:
	static Clinique* s_getInstance();
};

