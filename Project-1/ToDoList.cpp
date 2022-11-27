#include "ToDoList.h"

// method overriding
void ToDoList::outputList() {
    for (CheckBoxItem it : list)
        cout << it.item << ", done: " << (it.isChecked ? "yes" : "no") << endl;
}