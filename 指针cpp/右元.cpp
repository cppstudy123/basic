
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
class Person4 {
public:
    Person4(int age){
        this->age = age;
    }
   
    int age;
};
// 全局做右元
class GoodDay{
public:
    GoodDay();
    void visit();
};
class Building {
    friend class GoodDay;// 类作为右元类
    friend void goodSay(Building *b); // 全局函数作为右元函数
    friend void GoodDay::visit();// 类的成员函数作为右元函数
public:
    Building() {
        
    }
public:
    string sittingroot;
private:
    string bedroom;
    
};
void goodSay(Building *b) {
    cout << b->bedroom << endl;
}
GoodDay::GoodDay() { // 如果想这么定义, 那么一定要再头文件先声明
    
}
// 类作为右元类
//class GoodDay{
//public:
//    GoodDay();
//    void visit(){
//        
//    }
//    Building *building;
//};
int main(int argc, const char * argv[]) {
    
    return 0;
}
