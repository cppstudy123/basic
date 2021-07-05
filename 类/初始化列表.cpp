//
//  构造函数的调用规则.cpp
//  类
//
//  Created by MOMO on 2021/7/2.
//

#include <stdio.h>
#include "iostream"
#include "cstring"
using namespace std;

class Person {
public:
    Person(int a, int b, int c): ma(a), mb(b), mc(c) {
        
    }
    int ma;
    int mb;
    int mc;
};

int main_init_list() {
    Person p(2, 34, 4);
    cout << p.ma;
    return 0;
}
