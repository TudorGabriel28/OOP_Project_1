// Project-1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "Event.h"
#include "ListEvent.h"
#include "ToDoList.h"
#include "CheckBoxItem.h"
#include "ShoppingList.h"
#include "Reminder.h"
#include "Alarm.h"
#include "Birthday.h"

using namespace std;

int main()
{

    cout << "Some events functionalities:\n\n";


    cout << "Birthday event\n\n" ;

   // dynamic memory allocation
    Birthday* myBday = new Birthday("Tudor", "28-02-2002");
    myBday->outputBirthday();
    
    delete myBday;

    cout << "Alarm event\n\n";

        Alarm alarm = Alarm("school alarm", "10-11-2022 07:00:00", "Ringtone 1");

    alarm.checkAlarm("10-11-2022 06:00:00");

    cout << "Reminder event\n\n";

        Reminder reminder;
    reminder.checkReminder();

    cout << "Shopping list event\n\n";

        ShoppingList groceries;
    groceries.setName("groceries");

    struct CheckBoxItem item1 = { "milk", false };
    struct CheckBoxItem item2 = { "egg", false };
    struct CheckBoxItem item3 = { "meat", false };
    struct CheckBoxItem item4 = { "fruit", true };
    groceries.addItem(item1);
    groceries.addItem(item2, 5);
    groceries.addItem(item3);
    groceries.addItem(item4, 2);

    groceries.outputList();


    cout << "ToDo List event\n\n";

    ToDoList tasks;
    tasks.setName("Today tasks");

    struct CheckBoxItem task1 = { "OOP Lab", false };
    struct CheckBoxItem task2 = { "CSA Homework", false };
    struct CheckBoxItem task3 = { "ST Course", false };
    struct CheckBoxItem task4 = { "EDAE Exam", true };
    tasks.addItem(task1);
    tasks.addItem(task2);
    tasks.addItem(task3);
    tasks.addItem(task4);

    tasks.outputList();




}
