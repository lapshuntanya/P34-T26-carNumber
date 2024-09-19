#pragma once
#include "CarNumber.h"
#include <vector>
#include <algorithm>

class DIA
{
	vector<CarNumber> cars;
public:
	DIA();

	void showInfo()const;
	void takeCar(string user);

	int getAmountofCars()const;
	CarNumber operator[](int i);
};

