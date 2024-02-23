#include "MyString.h"

MyString::MyString()
{
	std::cout << "Unparameterized constructor called" << std::endl;
	MyString::m_cptrChar = new char[1];
	MyString::m_cptrChar[0] = '\0';
}

MyString::MyString(const char* a_cptrString)
{
	std::cout << "Parameterized constructor called" << std::endl;
	m_cptrChar = new char[strlen(a_cptrString) + 1];
	strcpy_s(m_cptrChar,strlen(a_cptrString) + 1 , a_cptrString);
	m_cptrChar[strlen(a_cptrString) + 1] = '\0';
}

MyString::MyString(const MyString& a_objString)
{
	std::cout << "Copy constructor called" << std::endl;
	m_cptrChar = new char[strlen(a_objString.m_cptrChar) + 1];
	strcpy_s(m_cptrChar, strlen(m_cptrChar), a_objString.m_cptrChar);
	m_cptrChar[strlen(a_objString.m_cptrChar) + 1] = '\0';
}

void MyString::printStr()
{
	//std::cout << "Print function called" << std::endl;
	std::cout << m_cptrChar << std::endl;
}