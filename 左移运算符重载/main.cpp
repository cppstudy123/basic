//
//  main.cpp
//  左移运算符重载
//
//  Created by MOMO on 2021/7/12.
//

#include <iostream>

//#include
class Person {
    friend std::ostream& operator<<(std::ostream &cout, Person &p);
public:
    Person(int a, int b): a(a), b(b){
        
    }
private:
    int a;
    int b;
};
/**
 只能用全局函数来实现左移运算
 */
std::ostream& operator<<(std::ostream &cout, Person &p) {
    std::cout << "哈哈哈" << p.a << "-" << p.b << std::endl;
    return cout;
}
int main(int argc, const char * argv[]) {
    // insert code here...
    Person p(1, 2);
    std::cout << p;
    return 0;
}
