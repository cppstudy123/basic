//
//  main.cpp
//  指针运算符
//
//  Created by MOMO on 2021/7/13.
//

#include <iostream>
using namespace std;

class Person {
public:
    Person(int a) {
        m_age = a;
    }
    ~Person() {
        cout << "析构" << endl;
    }
    void showAge() {
        cout << this->m_age << endl;
    }
    int m_age;
};

void 传统方式() {
    Person *p = new Person(18); // 堆区创建
    // 用new开辟的,要用delete删除
    delete p;// 指针运算符就可以用, 用智能指针来管理释放
}
class SmartPoint {
public:
    SmartPoint(Person *person){
        m_person = person;
    }
    ~SmartPoint() {
        delete this->m_person;
        this->m_person = NULL;
    }
    // 重载箭头操作
    Person* operator->() {
        return this->m_person;
    }
    // 重载*操作
    Person& operator*() {
        return *m_person;
    }
    
private:
    Person *m_person;
};
void 智能指针() {
    // SmartPoint是在栈上调用, 一定会调用SmartPoint的析构
    SmartPoint sp(new Person(10));
    sp->showAge(); // 本质是sp->->showAge();
    (*sp).showAge();
}

int main(int argc, const char * argv[]) {
   
    智能指针();
    return 0;
}
