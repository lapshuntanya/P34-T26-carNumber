#include "dia.h"

int CarNumber::counter = 9997;
char CarNumber::firstLetter = 'A';
char CarNumber::secondLetter = 'Z';

int main()
{
   /* CarNumber arr[55];
	for (int i = 0; i < 55; i++)
	{
		if (i % 5 == 0) cout << endl;
		cout << arr[i].getNumber() << "\t";
	}
	cout << "\n__________________________\n";
	cout << "counter: " << CarNumber::getCounter() << endl;
	cout << "first: " << CarNumber::getFirstLetter() << endl;
	cout << "second: " << CarNumber::getSecondLetter() << endl;*/


	DIA Kharkiv;
	cout << "List: " << endl;
	Kharkiv.showInfo();
	cout << "-----------------------------------\n";

	string number;
	cout << "Input number: "; cin >> number;
	Kharkiv.takeCar(number);

	//Kharkiv.showInfo();
	for (int i = 0; i < Kharkiv.getAmountofCars(); i++)	{
		cout << Kharkiv[i].getNumber() << endl;
	}
}


