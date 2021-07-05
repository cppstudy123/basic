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
 this指针
 */
class Person {
public:
    Person(int age){
        this->age = age;
    }
    int age;
    bool compareAge(Person &p) {
        if (this->age == p.age) {
            return true;
        }
        return false;
    }
    Person& personAddPerson(Person &p) {
        this->age = this->age + p.age;
        return *this;
    }
    Person personAddperson(Person &p1) {
        return *this;
    }
};
int main_1(int argc, const char * argv[]) {
    Person p1(10);
    cout << "年纪:" << p1.age << endl;
    return 0;
}
