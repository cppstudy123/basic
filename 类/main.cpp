//
//  main.cpp
//  类
//
//  Created by MOMO on 2021/7/1.
//

#include <iostream>
using namespace std;

const double PI = 3.14;

class Circle {
public:
    Circle() {
        cout << "构造函数" << endl;
    }
    ~Circle() {
        cout << "析构函数" << endl;
    }
    double calclateZC() {
        return 2 * PI * m_r;
    }
    int m_r;
};
/**
构造函数分类
*/
class Rect {
public:
    Rect() {
        // 没有构造函数
    }
    Rect(int a) {
        // 有参
    }
    // 拷贝构造函数
    Rect(const Rect &r) {
        age = r.age;
    }
    int age;
};

void test01 () {
    Circle c1;
    c1.m_r = 10;
    cout << c1.calclateZC() << endl;
}

int main1(int argc, const char * argv[]) {
    // insert code here...
    test01();
    return 0;
}
