#include "pch.h"
#include "gtest/gtest.h"
#include "../Project1/Person.h"
#include "../Project1/PhoneBook.h"



TEST(Add_Person, Add)
{
	std::string name, phone;
	name = "John";
	phone = "123";
	std::vector<std::string> v{ phone };
	Person p(name, v);
	PhoneBook pb;
	pb.AddNewPerson(p);
	Person* ptr = pb.FindPerson("John");
	EXPECT_NE(nullptr, ptr);
};

TEST(Remove_Person, Remove_Valid)
{
	std::string name, phone;
	name = "John";
	phone = "123";
	std::vector<std::string> v{ phone };
	Person p(name, v);
	PhoneBook pb;
	pb.AddNewPerson(p);
	pb.RemovePerson(p);
	Person* ptr = pb.FindPerson("John");
	EXPECT_EQ(nullptr, ptr);
}
TEST(Remove_Person, Remove_Invalid)
{
	std::string name, phone, a;
	name = "John";
	phone = "123";
	std::vector<std::string> v{ phone };
	Person p(name, v);
	PhoneBook pb;
	a = "zoli";
	Person b(a, v);
	pb.AddNewPerson(p);
	pb.RemovePerson(b);
	Person* ptr = pb.FindPerson("zoli");
	EXPECT_EQ(nullptr, ptr);
}
TEST(Find_Person, Exists)
{
	std::string name, phone;
	name = "John";
	phone = "123";
	std::vector<std::string> v{ phone };
	Person p(name, v);
	PhoneBook pb;
	pb.AddNewPerson(p);
	Person* ptr = pb.FindPerson("John");
	EXPECT_NE(nullptr, ptr);
};

TEST(Find_Person, Not_Exists)
{
	std::string name, phone;
	name = "John";
	phone = "123";
	std::vector<std::string> v{ phone };
	Person p(name, v);
	PhoneBook pb;
	pb.AddNewPerson(p);
	Person* ptr = pb.FindPerson("zoli");
	EXPECT_EQ(nullptr, ptr);
};
TEST(Find_Phonenumber, Exists)
{
	std::string name, phone;
	name = "John";
	phone = "123";
	std::vector<std::string> v{ phone };
	Person p(name, v);
	PhoneBook pb;
	pb.AddNewPerson(p);
	Person* ptr = pb.FindPhonenumber("123");
	EXPECT_NE(nullptr, ptr);
};

TEST(Find_Phonenumber, Not_Exists)
{
	std::string name, phone;
	name = "John";
	phone = "123";
	std::vector<std::string> v{ phone };
	Person p(name, v);
	PhoneBook pb;
	pb.AddNewPerson(p);
	Person* ptr = pb.FindPhonenumber("12");
	EXPECT_EQ(nullptr, ptr);
};

int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
