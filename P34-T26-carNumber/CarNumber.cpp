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

string CarNumber::getNumber() const{
    return number;
}

int CarNumber::getCounter(){
    return counter;
}

char CarNumber::getFirstLetter(){
    return firstLetter;
}

char CarNumber::getSecondLetter(){
    return secondLetter;
}

void CarNumber::setCounter(int n){
    if (n >= 1 && n <= 9999) {
        counter = n;
    }
}

void CarNumber::setFirstLetter(char a){
    if (a >= 'A' && a <= 'Z') {
        firstLetter = a;
    }
}

void CarNumber::setSecondLetter(char a){
    if (a >= 'A' && a <= 'Z') {
        secondLetter = a;
    }
}
