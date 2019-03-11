#pragma once
#include <string>
#include <vector>
#include "Person.h"


class PhoneBook {
public:
	void AddNewPerson(Person p);
	void RemovePerson(Person p);
	Person* FindPerson(std::string name);
	Person* FindPhonenumber(std::string phone);

private:
	std::vector<Person> phonebook;
};