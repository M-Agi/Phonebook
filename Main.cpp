#include "PhoneBook.h"
#include <iostream>

int main() {

	bool a = true;
	while (a) {

		std::cout << "PhoneBook functions:" << std::endl;
		std::cout << "1. Add new item." << std::endl;
		std::cout << "2. Remove item." << std::endl;
		std::cout << "3. Find name." << std::endl;
		std::cout << "4. Find phone number." << std::endl;
		std::cout << "5. Exit" << std::endl;

		int input;

		std::cin >> input;

		if (input == 5) {
			a = false;
		}
		else if (input == 1) {
			
		}

	
	};




	return 0;
}