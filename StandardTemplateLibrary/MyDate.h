#pragma once
#include <iostream>

class MyDate{
public:
	MyDate(int day, int month, int year) : day(day), month(month), year(year){}
	~MyDate() {}
	
	friend inline std::ostream& operator<<(std::ostream& os, const MyDate& dt);
	friend bool operator<(const MyDate& lhs, const MyDate& rhs);



private:
	int day, month, year;
};



inline std::ostream& operator<<(std::ostream& os, const MyDate& date)
{
	os << date.day << "/" << date.month << "/" << date.year;
	return os;
}

