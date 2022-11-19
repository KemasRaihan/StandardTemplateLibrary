#include "Contact.h"

Contact::Contact(string firstName, string surname, string contactNumber, const MyDate& dateOfBirth) : firstName(firstName), surname(surname), contactNumber(contactNumber), dateOfBirth(dateOfBirth) {}
Contact::Contact(const Contact& rhs) : firstName(rhs.firstName), surname(rhs.surname), contactNumber(rhs.contactNumber), dateOfBirth(rhs.dateOfBirth)
{
	std::cout << "Hello\n";
}
Contact::~Contact()
{

}

void const Contact::display() const
{
	std::cout << "\nFirst name: " << firstName << std::endl;
	std::cout << "Surname: " << surname << std::endl;
	std::cout << "Contact Number : " << contactNumber << std::endl;
	std::cout << "DOB: " << dateOfBirth << std::endl;
}

