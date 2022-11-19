#include"Contact.h"


// always use pointers to objects when passing objects as parameters
void displayPerson(const Contact* contact)
{
	contact->display();
}

// sort contacts in alphabetical order
bool sortOnSurname(const Contact* lhs, const Contact* rhs)
{
	// return true if surname of lhs comes before surname of rhs alphabetically
	if (lhs->getSurname() < rhs->getSurname()) return true;
	return false;
}

// sort contacts from oldest to youngest
bool sortOnAge(const Contact* lhs, const Contact* rhs)
{
	// return true if lhs date is the same or older than rhs date
	if (lhs->getDateOfBirth() < rhs->getDateOfBirth()) return true;
	else return false;
}


bool isSurnameEqual(const Contact* contact, const string &search)
{
	return contact->isSurname(search);
}


int main()
{
#ifdef _DEBUG
	//  _CrtSetBreakAlloc(87);
	_onexit(_CrtDumpMemoryLeaks);
#endif

	Contact* contact1 = new Contact("Johnny", "Max", "70000", MyDate(11, 12, 1970));

	//contact1->displayContact();

	//Contact* contact2(contact1);

	//contact2->displayContact();

	// when storing objects in containers, always store the pointers to the objects
	std::list<Contact*> contacts;

	std::list<Contact*>::iterator itrc(contacts.begin());

	contacts.push_back(contact1);
	contacts.push_back(new Contact("Harry", "Potter", "9113", MyDate(10,10,1995)));
	contacts.push_back(new Contact("Bob", "Johnson", "111", MyDate(10, 10, 1955)));
	contacts.push_back(new Contact("John", "Cena", "9113", MyDate(10, 11, 1955)));
	contacts.push_back(new Contact("Dwayne", "Johnson", "2313", MyDate(11, 11, 1955)));
	contacts.push_back(new Contact("Connor", "McGregor", "99000", MyDate(10, 10, 1983)));





	//while (itr != contacts.end())
	//	(itr++)->displayContact();

	/*std::cout << "Contacts in list: " << std::endl;
	for_each(contacts.cbegin(), contacts.cend(), displayPerson);*/

	std::vector<Contact*> vcontacts; 



	// copy every contact in list to vector
	copy(contacts.cbegin(), contacts.cend(), back_inserter(vcontacts));

	std::cout << "Contacts in vector: " << std::endl; 
	for_each(vcontacts.cbegin(), vcontacts.cend(), displayPerson);

	//std::cout << "Contacts in vector after surname sort: " << std::endl;
	
	//sort(vcontacts.begin(), vcontacts.end(), sortOnSurname);

	//bool isOlder = sortOnAge(Contact("Bob", "Smith", 9113, MyDate(12, 11, 1955)), Contact("David", "Johnson", 2313, MyDate(11, 11, 1955)));
	//
	//if (isOlder) std::cout << "Bob is same age or older";
	//else std::cout << "Bob is younger";

	//sort(vcontacts.begin(), vcontacts.end(), sortOnAge);

	/*std::cout << "\nContacts in vector after sort: " << std::endl;
	for_each(vcontacts.cbegin(), vcontacts.cend(), displayPerson);*/

	//std::cout << "\nContacts in list after age sort: " << std::endl;
	//for_each(contacts.cbegin(), contacts.cend(), displayPerson);

	
	const auto res = std::bind(&isSurnameEqual, std::placeholders::_1, std::placeholders::_2);

	if (res(contact1, "Max")) std::cout << "This person is Max" << std::endl;
	else std::cout << "This person is not Max" << std::endl;






	//while (itr != contacts.end())
	//	delete *itr;
	std::vector<Contact*>::iterator itrv(vcontacts.begin());
	while (itrv != vcontacts.end())
		delete *(itrv++);

	return 0;
}