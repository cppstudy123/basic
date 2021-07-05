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
    Person(string name): name(name) {
        
    }
    explicit Person(int name) {
        
    }
    // 防止利用隐式法赋值
    string name;
};

int main_explicit() {
    Person p1("w32342");
    Person p2(10);
//    Person p3 = 10; // 加了explicit, 这样就不行了
    return 0;
}
