#include "CarNumber.h"

int CarNumber::counter = 9985;
char CarNumber::firstLetter = 'A';
char CarNumber::secondLetter = 'Z';

int main()
{
    CarNumber arr[55];
	for (int i = 0; i < 55; i++)
	{
		if (i % 5 == 0) cout << endl;
		cout << arr[i].getNumber() << "\t";
	}
	cout << "\n__________________________\n";
	cout << "counter: " << CarNumber::getCounter() << endl;
	cout << "first: " << CarNumber::getFirstLetter() << endl;
	cout << "second: " << CarNumber::getSecondLetter() << endl;


}


