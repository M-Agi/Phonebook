#include "pch.h"
#include "gtest/gtest.h"
#include "../Project1/Person.h"
#include "../Project1/PhoneBook.h"



TEST(NewPerson, Add)
{
	std::string name, phone;
	name = "John";
	phone = "123";
	std::vector<std::string> v{ phone };
	Person p(name, v);
	PhoneBook pb;
	pb.AddNewPerson(p);
	EXPECT_EQ(1, pb.phonebook.size());
};

int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
