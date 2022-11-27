#pragma once
#include <iostream>
#include "ListEvent.h"
#include "CheckBoxItem.h"

class ShoppingList : public ListEvent<CheckBoxItem> {

public:

    void outputList();

};

