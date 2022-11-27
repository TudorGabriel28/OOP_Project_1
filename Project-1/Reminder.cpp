#include "Reminder.h"


Reminder::Reminder(string text, string date)
{
    text = text;
    date = date;
}

Reminder::Reminder() {
    name = "No name reminder";
    text = "No reminder!";
    *date = "";
}
// destructor 
Reminder::~Reminder() {
    delete date;
}

void Reminder::checkReminder() {
    cout << text << " " << *date << endl;
}