
#include <iostream>
#include "cstring"
using namespace std;
/**
 只读的实现原理
 */
/**
 this的本质
 Person* const this;
 */
class Person3 {
public:
    Person3(int age){
        this->age = age;
    }
    void showAge() const {// 这里面就不能修改this对象上面的属性了
//        this->age = 100;
        this->age2 = 100; // 常函数中mutable 修饰的依然可以修改
    }
    int age;
    mutable int age2;
};
void 常对象() {
    // 常对象只能调用常函数
    const Person3 p3(10);
//    p3.age = 100; 不能改
    p3.age2 = 120;
}
int main_3(int argc, const char * argv[]) {
    
    return 0;
}
