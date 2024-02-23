#include<conio.h>
#include"MyString.h"


int main()
{
	MyString string1 = "Yogesh";
	MyString* string2 = new MyString();
	MyString string3 = string1;
	std::cout << "string3::";
	string3.printStr();
	MyString string4 = std::move(string3);

	std::cout << "string1::";
	string1.printStr();
	std::cout << "string2::";
	string2->printStr();	
	std::cout << "string4::";
	string4.printStr();

	return 0;
}