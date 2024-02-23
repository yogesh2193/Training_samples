#pragma once
#include<iostream>
#include <conio.h>
#include <stdio.h>
#include <cstring>
#include <string>
#include <vector>
#include <map>

class MyString
{
private:
	char* m_cptrChar = std::nullptr_t();

public:
	MyString();

	MyString(const char* a_cptrChar);

	MyString(const MyString& a_objString);

	MyString(MyString&& a_objString) noexcept
	{
		std::cout << "Move constructor called" << std::endl;
		m_cptrChar = a_objString.m_cptrChar;
		a_objString.m_cptrChar = std::nullptr_t();
	}
	void printStr();

};

