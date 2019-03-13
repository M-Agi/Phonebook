#include "PhoneBook.h"
#include <iostream>

void PhoneBook::AddNewPerson(Person b) 
{

	phonebook.push_back(b);
	std::cout << b.name << " is added to the phonebook." << std::endl;

};


void PhoneBook::RemovePerson(Person p)
{

	for (unsigned i = 0; i < phonebook.size(); ++i) 
	{
		if (phonebook[i].name == p.name) 
		{
			phonebook.erase(phonebook.begin() + i);
			std::cout << p.name << " is removed from the phonebook." << std::endl;
			return;
		}
	}
	
	std::cout << "There is no " << p.name << " in the phonebook." << std::endl;
	
};


Person* PhoneBook::FindPerson(std::string name) 
{

	for (unsigned i = 0; i < phonebook.size(); ++i) 
	{
		if (phonebook[i].name == name) 
		{
			std::cout << "Found " << name << " in the phonebook." << std::endl;
			return &phonebook[i];
		}

	}

	std::cout << "There is no " << name << " in the phonebook." << std::endl;
	return nullptr;
};

Person* PhoneBook::FindPhonenumber(std::string phone) 
{

	for (unsigned i = 0; i < phonebook.size(); ++i) 
	{

		for (unsigned j = 0; j < phonebook[i].phones.size(); ++j)
		{

			if (phonebook[i].phones[j] == phone)
			{
				std::cout << "Found " << phone << " in the phonebook." << std::endl;
				return &phonebook[i];
			};
		}

	}

	std::cout << "There is no " << phone << " in the phonebook." << std::endl;

	return nullptr;

};


std::ostream& PhoneBook::SavePhoneBook(std::ostream& dest)
{
	for (unsigned i = 0; i < phonebook.size(); ++i)
	{
		dest << '\n' << phonebook[i].name << ' ';

		for (unsigned j = 0; j < phonebook[i].phones.size(); ++j)
		{
			dest << ' ' << phonebook[i].phones[j] << '\n';
		}

	}
	return dest;
};

void PhoneBook::AddPhoneToPerson(Person* person, std::string phone)
{
	person->phones.push_back(phone);

};