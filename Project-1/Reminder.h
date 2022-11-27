#pragma once
#include <iostream>
#include <string>
#include "Event.h"

using namespace std;

class Reminder : public Event {
private:
    string text;
    //dynamic memory allocation
    string* date = new string;

public:

    Reminder(string text, string date);

    Reminder();

    // destructor 
    ~Reminder();

    void checkReminder();
};