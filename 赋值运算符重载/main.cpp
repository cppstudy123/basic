//
//  main.cpp
//  赋值运算符
//
//  Created by MOMO on 2021/7/14.
//

#include <iostream>
#include <cstring>
using namespace std;
class Person{
public:
    Person(char* name, int age){
        m_name = name;
        m_age = age;
    }
    Person& operator=(const Person &p){// 防止对p进行修改
        // 先判断原来堆区是否有, 有的话, 就释放
//        if (this->m_name != NULL) {
//            delete [] this->m_name;
//            this->m_name = NULL;
//        }
        this->m_name = new char[strlen(p.m_name) + 1];
        strcpy(this->m_name, p.m_name);
        this->m_age = p.m_age;
        return *this;
    }
    char *m_name;
    int m_age;
};
void 简单栈值赋值() {
    Person p1("aa", 1);
    Person p2("bb", 2);
    // 就是讲p2中所有值都指向p1中值得地址
    p2 = p1;
    cout << p1.m_name << endl;
};
void 简单堆值赋值() {
    Person *p1 = new Person("aa", 1);
    Person *p2 = new Person("bb", 2);
    p2 = p1;
    cout << *p1->m_name << endl;
    delete p1;
};
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    简单栈值赋值();
    return 0;
}
