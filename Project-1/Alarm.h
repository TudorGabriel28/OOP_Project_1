#pragma once
#include <iostream>
#include <string>
#include "Event.h"

class Alarm : public Event {
private:
    string date;
    string ringtone;
public:
    Alarm(string name, string date, string ringtone);

    void checkAlarm(string currDate);
};