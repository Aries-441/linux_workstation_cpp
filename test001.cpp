#include<iostream>
#include<stdio.h>
#include"Counter.h"
using namespace std;
int main(){
    Counter cnt(3);
    cnt.print();
    ++cnt;
    cnt.print();
    (++cnt).print();
    (cnt++).print();
    cnt.print();
    return 0;
}