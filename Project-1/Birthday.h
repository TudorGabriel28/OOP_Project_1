#pragma once
#include <iostream>
#include <string>
#include "Event.h"

using namespace std;

class Birthday : public Event {
private:
    string date;

public:
    Birthday(string name, string date);

    void outputBirthday();
};