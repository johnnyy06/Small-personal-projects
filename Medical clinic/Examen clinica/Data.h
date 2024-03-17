#pragma once
#include <iostream>

class Data
{
private:
	int day;
	int month;
	int year;
	int hour;
	int minute;
public:
	Data(const int newDay, const int newMonth, const int newYear,
		const int newHour, const int newMinute) : day(newDay),
		month(newMonth), year(newYear), hour(newHour), minute(newMinute) {}

	// getters
	int getDay() const { return this->day; }
	int getMonth() const { return this->month; }
	int getYear() const { return this->year; }
	int getHour() const { return this->hour; }
	int getMinute() const { return this->minute; }

	friend std::ostream& operator <<(std::ostream& outStream, const Data& data);

	~Data() {}
};

std::ostream& operator <<(std::ostream& outStream, const Data& data);