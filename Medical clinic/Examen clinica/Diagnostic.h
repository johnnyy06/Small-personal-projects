#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Data.h"
#include "Employee.h"

class Diagnostic
{
public:
	virtual void print() = 0;
};