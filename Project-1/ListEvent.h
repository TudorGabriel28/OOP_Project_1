#pragma once
#include <vector>
#include "Event.h"

using namespace std;


//template functions
template <typename T>
class ListEvent : public Event {
protected:
    vector<T> list;
public:

    void addItem(T t) {
        list.push_back(t);
    }

    // method overloading
    void addItem(T t, int count) {
        while (count > 0) {
            list.push_back(t);
            count--;
        }

    }

    void deleteItem(T t) {
        // try and catch statement
        try
        {
            list.erase(remove(list.begin(), list.end(), t), list.end());
        }
        catch (const std::exception&)
        {
            cout << "Item could not be deleted" << endl;
        }

    }

    void outputList() {
        for (T t : list)
            cout << t << endl;
    }
};