#pragma once
#include <iostream>
#include "ListEvent.h"
#include "CheckBoxItem.h"

using namespace std;

// inheritance
class ToDoList : public ListEvent<CheckBoxItem> {

public:
    // method overriding
    void outputList();

};