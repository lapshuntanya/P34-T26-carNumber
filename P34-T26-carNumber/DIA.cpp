#include "DIA.h"

DIA::DIA(){
	for (int i = 0; i < 10; i++){
		cars.push_back(CarNumber());
	}
}

void DIA::showInfo() const{
	for (int i = 0; i < cars.size(); i++)
	{
		if (i % 5 == 0) cout << endl;
		cout << cars[i].getNumber() << "\t";
	}
	cout << endl;
}

void DIA::takeCar(string user)
{
	auto item = find_if(cars.begin(), cars.end(), [user](CarNumber obj) {
		return obj.getNumber() == user;
		});

	if (item == cars.end()) {
		cout << "not found\n"; 
		return;
	}

	cars.erase(item);
	cars.push_back(CarNumber());
}

int DIA::getAmountofCars() const{
    return cars.size();
}

CarNumber DIA::operator[](int i){
    return cars[i];
}
