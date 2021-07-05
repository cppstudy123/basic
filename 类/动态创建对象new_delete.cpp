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
/**
 C语言分配内存太复杂
 */

class Person2 {
public:
    Person2() {
        cout << "默认构造函数" << endl;
    }
    Person2(string name): name(name) {
        cout << "1个参数的构造函数" << endl;
    }
   
    string name;
};
void 用new开辟数组() {
    cout << "创建10个Person" << endl;
    // 堆区创建数组, 一定会调用构造函数
    // 这样代码,就是创建是个Person对象
    Person2 *p = new Person2[10];
    /**
     数组的释放
     delete []p;
     */
}
int main_new() {
    Person2 *p = new Person2("sdsd");
    cout << p->name << endl;
    // 相当于 Person *p = (Person*)malloc(sizeof(Person))
    /**
     malloc 和new的区别
     1. malloc 和 free是库函数
        new 和 delete 属于运算符
     2. malloc不会调用构造函数, new会
     3. malloc 返回void* 万能指针, 需要强转, new返回创建对象的指针
     */
    /**
     不要用void去接受 new创建出来的对象
     因为无法释放,无法调用析构函数
     */
    
    用new开辟数组();
    return 0;
}
