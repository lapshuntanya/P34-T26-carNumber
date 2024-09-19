#include "CarNumber.h"

CarNumber::CarNumber()
{
    counter++;
    if (counter > 9999) {
        counter = 1;
        secondLetter++;
        if (secondLetter > 'Z') {
            secondLetter = 'A';
            firstLetter++;
        }
    }

    number = to_string(counter / 1000) + to_string(counter / 100 % 10) +
        to_string(counter / 10 % 10) + to_string(counter % 10) +
        firstLetter + secondLetter;
}

string CarNumber::getNumber() const
{
    return string();
}

int CarNumber::getCounter()
{
    return 0;
}

char CarNumber::getFirstLetter()
{
    return 0;
}

char CarNumber::getSecondLetter()
{
    return 0;
}

void CarNumber::setCounter(int n)
{
}

void CarNumber::setFirstLetter(char a)
{
}

void CarNumber::setSecondLetter(char a)
{
}
