#pragma once
#include <vector>
#include <string>

class Person {
public:
	Person(std::string n, std::vector<std::string> v)
		: name(n),
		phones(v) {}
	
	void AddNewNumber(std::string phone);


	std::string name;
	std::vector<std::string> phones;

};