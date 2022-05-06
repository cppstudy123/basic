//
//  main.cpp
//  关系运算符重载
//
//  Created by MOMO on 2021/7/14.
//

#include <iostream>
#include <cstring>

class Person{
public:
    Person(string name, int age){
        m_name = name;
        m_age = age;
    }
    string m_name;
    int m_age;
    bool operator==(Person &p) {
        if (this->m_age == p.m_age) {
            return true;
        }
        return false;
    }
    bool operator!=(Person &p) {
        if (this->m_age == p.m_age) {
            return true;
        }
        return false;
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
