#include "PhoneBook.h"
#include <iostream>

int main() {

	bool a = true;
	PhoneBook pb;
	while (a) 
	{

		std::cout << std::endl << "PhoneBook functions:" << std::endl;
		std::cout << "1. Add new item." << std::endl;
		std::cout << "2. Remove item." << std::endl;
		std::cout << "3. Find name." << std::endl;
		std::cout << "4. Find phone number." << std::endl;
		std::cout << "5. Add another phonenumber to existing item." << std::endl;
		std::cout << "6. Save to ostream." << std::endl;
		std::cout << "7. Exit" << std::endl;

		int input;
		std::cin >> input;

		switch (input)
		{
		case 1:
		{
			std::cout << "Give name" << std::endl;
			std::string name, phonenumber;
			std::cin >> name;
			std::cout << "Give phone number" << std::endl;
			std::cin >> phonenumber;
			std::vector<std::string> phone;
			phone.push_back(phonenumber);
			Person p(name, phone);
			pb.AddNewPerson(p);
			break;
		}
		case 2:
		{
			std::cout << "Give name that you want to delete." << std::endl;
			std::string name;
			std::cin >> name;
			Person* pp = pb.FindPerson(name);
			pb.RemovePerson(*pp);
			break;
		}
		case 3:
		{
			std::cout << "Give a name." << std::endl;
			std::string name;
			std::cin >> name;
			pb.FindPerson(name);
			break;
		}
		case 4:
		{
			std::cout << "Give a phone number." << std::endl;
			std::string phone;
			std::cin >> phone;
			pb.FindPhonenumber(phone);
			break;
		}
		case 5:
		{
			std::cout << "Give name." << std::endl;
			std::string name, phone;
			std::cin >> name;
			Person* person = pb.FindPerson(name);
			if (person != nullptr)
			{
				std::cout << "Give phonenumber." << std::endl;
				std::cin >> phone;
				pb.AddPhoneToPerson(person, phone);
				std::cout << phone <<" added to " << name << std::endl;
			}
			
			break;
		}
		case 6:
			pb.SavePhoneBook(std::cout);
			break;

		case 7:
			a = false;
			break;

		default:
		{
			std::cout << "Unknown command!" << std::endl;
			break;
		}
		}

	
	};
	
	return 0;
}