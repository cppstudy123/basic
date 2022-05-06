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
    int& operator[](int index){
        return 1;
    }
    char *m_name;
    int m_age;
};

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
