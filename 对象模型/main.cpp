//
//  main.cpp
//  单例模式
//
//  Created by MOMO on 2021/7/5.
//

#include <iostream>
#include "cstring"
using namespace std;

/**
 空类的大小是1
 1. 成员函数是分开存储的, 不属于对象上
 2. 静态成员变量也不属于类对象
 3. 静态成员函数也不属于类对象
 4. 只有非静态的成员函数才属于类对象
 */
class Person {
    
};
class Person2 {
    int a;
};
int main(int argc, const char * argv[]) {
    // insert code here...
    Person p1;
    cout << "大小:" << sizeof(p1) << endl;
    Person2 p2;
    cout << "大小:" << sizeof(p2) << endl;
    return 0;
}
