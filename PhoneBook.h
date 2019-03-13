#pragma once
#include <string>
#include <vector>
#include <ostream>
#include "Person.h"


class PhoneBook {
public:
	void AddNewPerson(Person p);
	void RemovePerson(Person p);
	Person* FindPerson(std::string name);
	Person* FindPhonenumber(std::string phone);
	void AddPhoneToPerson(Person* person, std::string phone);
	std::ostream & SavePhoneBook(std::ostream& dest);

private:
	std::vector<Person> phonebook;
};