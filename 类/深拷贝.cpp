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
    Person(char *wname, int age) {
        name = (char *) malloc(strlen(wname) + 1);
        age = age;
    }
    int age;
    char *name;
    // 重新提供深copy函数, 类解决释放内存的问题
    // 系统默认提供的copy构造函数是值传递,浅copy
    // 这个是因为属性开辟在堆区
    Person(const Person &p) {
        name = (char *)malloc(strlen(p.name) + 1);
        age = p.age;
    }
    ~Person() {
        if (name != NULL) {
            cout << "释放name" << endl;
            free(name);
            name = NULL;
        }
    }
};

int main_deal_deep_copy() {
    Person p1("李荣平", 30);
    Person p2(p1);
    return 0;
}
