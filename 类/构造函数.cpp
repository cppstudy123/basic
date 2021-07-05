//
//  构造函数.cpp
//  类
//
//  Created by MOMO on 2021/7/2.
//

#include <stdio.h>
#include "iostream"
#include "cstring"
using namespace std;
/**
 1. 按照参数分类
 有参
 无参
 2. 按照类型分类
 普通
 拷贝构造
 */
/**
 1. 匿名对象声明完毕, 立即释放
 2. 对无参的构造函数, 不要用括号法
 */
class Person {
public:
    Person() {
        
    }
    Person(const Person &p) {
        age = p.age;
        strcpy(name, p.name);
    }
    int age;
    char name[20];
};
int main_gouzao(int argc, const char * argv[]) {
    // insert code here...
    Person p1;
    p1.age = 12;
    strcpy(p1.name, "we");
    Person p2 = Person(p1);
    cout << p2.name << endl;
    return 0;
}
