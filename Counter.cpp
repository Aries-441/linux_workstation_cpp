#include<iostream>
#include"Counter.h"
using namespace std;
Counter & Counter::operator++(){
    if (value == alarm) cout << "已超时\n";
    else ++value;
    return *this;
}

Counter Counter::operator++(int x){
    Counter tmp = *this;
    if (value == alarm) cout << "已超时\n";
    else ++value;
    return tmp;
}
