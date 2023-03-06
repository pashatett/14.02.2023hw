﻿#include <iostream>
using namespace std;

#include "Point.h"
void Test_class_point() {
    math::Point x(2.5, 8.7);
    math::Point y(-1.3, 5.8);
    x = x * 5;
    y = x + y;
    x.Show();
    y.Show();
    if (x != y)
        cout << "FALSE\n\n";
}

#include "Storage.h"
void Test_class_numberStorage() {
    storage::NumberStorage a(15);
    a.print();
    cout << a.getUsedMemory() << endl;
}

int main(){
    Test_class_point();
    Test_class_numberStorage();
}