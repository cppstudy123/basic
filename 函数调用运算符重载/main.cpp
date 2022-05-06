//
//  main.cpp
//  函数调用运算符重载
//
//  Created by MOMO on 2021/7/14.
//

#include <iostream>
#include <cstring>
using namespace std;
class Person{
public:
    void operator()(string text) {
        cout << text << endl;
    }
};
void test01() {
    Person p;
    p("颠三倒四地方");
}
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World111!\n";
    test01();
    return 0;
}
