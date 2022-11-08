#pragma once
#include <iostream>
#include "MyDate.h"
class Contact
{
public:
	Contact(std::string firstName, std::string surname, unsigned long contactNumber, const MyDate& date);
	Contact(const Contact& rhs);
	~Contact();

	void const display() const;
	friend bool sortOnSurname(const Contact* lhs, const Contact* rhs);
	friend bool sortOnAge(const Contact& lhs, const Contact& rhs);


private:
	std::string firstName;
	std::string surname;
	unsigned long contactNumber;
	MyDate dateOfBirth;
};
