#pragma hdrstop
#pragma argsused

#ifdef _WIN32
#include <tchar.h>
#else
  typedef char _TCHAR;
  #define _tmain main
#endif

#include <stdio.h>
#include <iostream>
#include "Header.h"
#include "DLL.cpp"



int _tmain(int argc, _TCHAR* argv[])
{
	//Смена кодировки
	system("chcp 1251");
    std::system("cls");

	std::cout<<"Группа: ";
	printGroup();

	std::cout<<"\nФИО: ";
	printFIO();

	std::system("pause");
	return 0;
}
