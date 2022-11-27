#include "Alarm.h"

Alarm::Alarm(string name, string date, string ringtone)
{
    this->name = name;
    this->date = date;
    this->ringtone = ringtone;
}

void Alarm::checkAlarm(string currDate) {
    if (currDate == date) {
        cout << "WAKEY WAKEY IT'S TIME FOR SCHOOL" << endl;
    }
    else {
        cout << "Zzzzz" << endl;
    }
}