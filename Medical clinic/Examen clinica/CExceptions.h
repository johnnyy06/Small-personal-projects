#pragma once
#include <iostream>
#include <string>

class CExceptions
{
private:
	int e_code;
	std::string e_message;
public:
	CExceptions(const int newCode, const std::string& newMessage) : e_code(newCode), e_message(newMessage) {}

	// getters
	int getE_Code()const { return this->e_code; }
	std::string getE_Message()const { return this->e_message; }
};

