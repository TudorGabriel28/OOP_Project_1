#include "Birthday.h"


Birthday::Birthday(string name, string date)
{
    this->name = name;
    this->date = date;
}

void Birthday::outputBirthday() {
    cout << name << " birthday is on: " << date << endl;
}