#pragma once
#include<conio.h>
#include<stdio.h>
#include<cstring>
#include<string.h>


class String
{
private: 
	char* m_cptr;
	int m_size;

public:
	String()
	{
		m_cptr = nullptr;
		m_size = 1;
	}

	String(const char* a_charPtr)
	{
		m_cptr = a_charPtr;
		m_size = strlen(a_charPtr);
	}

	String(String& a_Obj)
		: m_size(a_Obj.m_size)
	{
		m_cptr = new char[m_size + 1];
		strcpy_s(m_cptr, m_size+1, a_Obj.m_cptr);
		
	}

	String(String&& a_Obj)
		:m_size(a_Obj.m_size)
	{
		m_cptr = new char[m_size + 1];
		strcpy_s(m_cptr, m_size + 1, a_Obj.m_cptr);

		a_Obj.m_size = 0;
		a_Obj.m_cptr = nullptr;
	}

};