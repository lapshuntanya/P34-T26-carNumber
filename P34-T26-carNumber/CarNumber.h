#pragma once
#include <string>
#include <iostream>
using namespace std;

class CarNumber
{
	static int counter;
	static char firstLetter;
	static char secondLetter;

	string number;
public:
	CarNumber();

	string getNumber()const;

	static int getCounter();
	static char getFirstLetter();
	static char getSecondLetter();

	static void setCounter(int n);
	static void setFirstLetter(char a);
	static void setSecondLetter(char a);
};

