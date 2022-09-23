#ifndef COUNTER_H
#define COUNTER_H

#include<iostream>
using namespace std;
class Counter{
    int value;
    int alarm;
public:
    Counter(int a) {
        value = 0;
        alarm = 0;
    }
    Counter &operator++();
    Counter operator++(int);
    void print() const {
        cout << value << endl;
    }   
};
#endif