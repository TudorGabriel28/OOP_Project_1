#pragma once
#include <string>

using namespace std;

class Event {
protected:
    string name;
public:
    string getName();
    void setName(string s);
};