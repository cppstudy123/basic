//
//  main.cpp
//  运算法重载练习
//
//  Created by MOMO on 2021/7/8.
//

#include <iostream>
#include "AddOperator.hpp"
#include "PrevAddOperator.hpp"
using namespace std;
// 全局函数用来重载运算法
AddOperator operator+(AddOperator &p1, AddOperator &p2) {
    AddOperator temp(0, 0);
    temp.ma = p1.ma + p2.ma;
    temp.mb = p1.mb + p2.mb;
    return temp;
}
ostream& operator<<(ostream& cout, PrevAddOperator &p) {
    cout << p.m_Num;
    return cout;
}
void 测试加法运算符() {
    AddOperator p1(1,2);
    AddOperator p2(1,2);
    AddOperator p3 = p1 + p2;
    std::cout << p3.ma;
}
void 测试前置加法运算符() {
    PrevAddOperator p;
    cout << ++(++p) << endl;
}
int main(int argc, const char * argv[]) {
    // insert code here...
    测试前置加法运算符();
    return 0;
}
