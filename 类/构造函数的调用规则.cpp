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
// 1. 如果提供了有参构造函数, 就不会提供默认构造函数,  但是会提供copy构造函数
// 2. 如果提供了copy构造函数, 编译器就不会提供其他任何构造函数
class Person {
public:
    
    int age;
};

int main_gouzao_rule() {
    Person p1;
    p1.age = 1;
    Person p2(p1);
    cout << p2.age << endl;
    return 0;
}
