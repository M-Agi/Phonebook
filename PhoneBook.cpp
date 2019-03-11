#include "PhoneBook.h"
#include <iostream>

void PhoneBook::AddNewPerson(Person b) {

	phonebook.push_back(b);
	std::cout << "The " << b.name << "is added to the phonebook." << std::endl;

};


void PhoneBook::RemovePerson(Person p) {
	
	for (unsigned i = 0; i < phonebook.size(); ++i) {
		if (phonebook[i].name == p.name) {
			phonebook.erase(phonebook.begin()+i);
			std::cout << "The " << p.name << "is removed from the phonebook." << std::endl;
		}
		else {
		
			std::cout << "There is no " << p.name << "in the phonebook." << std::endl;
		}
	}

};


Person* PhoneBook::FindPerson(std::string name) {

	Person* ptr = nullptr;

	for (unsigned i = 0; i < phonebook.size(); ++i) {
		if (phonebook[i].name == name) {
			std::cout << "Found " << name << "in the phonebook." << std::endl;
			ptr = &phonebook[i];
		}

	}
	if (ptr == nullptr) {
		std::cout << "There is no " << name << "in the phonebook." << std::endl;
	}

	return ptr;
};

Person* PhoneBook::FindPhonenumber(std::string phone) {

	Person* ptr = nullptr;

	for (unsigned i = 0; i < phonebook.size(); ++i) {

		for (unsigned j = 0; j < phonebook[i].phones.size(); ++j) {

			if (phonebook[i].phones[j] == phone) {
				std::cout << "Found " << phone << "in the phonebook." << std::endl;
				ptr = &phonebook[i];
			};
		}

	}


	if (ptr == nullptr) {
		std::cout << "There is no " << phone << "in the phonebook." << std::endl;
	}

	return ptr;

};


