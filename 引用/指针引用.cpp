//
//  指针引用.cpp
//  引用
//
//  Created by MOMO on 2021/7/2.
//

#include <stdio.h>
#include "iostream"
#include "cstring"
using namespace std;

struct Person {
    char name[10];
};

void get_name(Person *p) {
    /**
     p 是一个指向指针的指针
     *p 就是指向Person
     */
    cout << "get_name1:" << p->name << endl;
}
void get_name2(Person &p) {
    /**
     p 是一个指向指针的指针
     *p 就是指向Person
     */
    cout << "get_name2:" << p.name << endl;
}
void get_name3(Person p) {
    /**
     p 是一个指向指针的指针
     *p 就是指向Person
     */
    cout << "get_name3:" << p.name << endl;
}
void set_name1(Person &p) {
    strcpy(p.name, "修改第一次");
}
void set_name2(Person *p) {
    strcpy(p->name, "修改第二次");
}

void test01() {
    Person p = {"12"};
//    修改结构体(&p);
    get_name(&p);
    get_name2(p);
    get_name3(p);
    set_name1(p);
    cout << "修改后1:" << p.name << endl;
    set_name2(&p);
    cout << "修改后2:" << p.name << endl;
    // &p 是取的是p指针的地址
    // 如果参数是Person *p, 你获取的只是这个指针的地址, **p 你才能获取Person的地址 因为*是解地址
}
int main(int argc, const char * argv[]) {
    test01();
    
    return 0;
}
