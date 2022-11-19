#pragma once
#include <iostream>
#include "MyDate.h"

using std::string;

#include <iostream>
#include <list>
#include <vector>
#include <algorithm>
#include <functional>

class Contact
{
public:
	Contact(string firstName, string surname, string contactNumber, const MyDate& date);
	Contact(const Contact& rhs);
	~Contact();

	void const display() const;
	inline string getSurname() const;
	inline MyDate getDateOfBirth() const; 
	inline bool isSurname(const string &surname) const;
	


private:
	string firstName, surname, contactNumber;
	MyDate dateOfBirth;
};

inline string Contact::getSurname() const { return surname; }
inline MyDate Contact::getDateOfBirth() const { return dateOfBirth; }
inline bool Contact::isSurname(const string &surname) const { return this->surname == surname; }