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

class Phone{
public:
    Phone(string pName) {
        pname = pName;
        cout << "phone 构造函数" << endl;
    }
    string pname;
    ~Phone() {
        cout << "phone 析构函数" << endl;
    }
};

class Person {
public:
    // 这里 string phone 是重点
    Person(string pName, string phone, string phone_game): phone_name(pName), phone(phone), phone_game(phone_game) {
        cout << "person 构造函数" << endl;
    }
    string phone_name;
    Phone phone;
    string phone_game;
    ~Person() {
        cout << "person 析构函数" << endl;
    }
    
};

int main_init_list2() {
    Person p("手机明", "手机示例", "手机游戏");
    cout << p.phone_game;
    return 0;
}
