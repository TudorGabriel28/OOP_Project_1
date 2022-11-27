#include "ShoppingList.h"

void ShoppingList::outputList() {
    for (CheckBoxItem it : list)
        cout << it.item << ", bought: " << (it.isChecked ? "yes" : "no") << endl;
}