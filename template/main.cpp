//
//  main.cpp
//  template
//
//  Created by rongping li on 2022/5/19.
//

#include <iostream>
#include "函数模板.hpp"
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    // 自动类型推导
    int a = 1;
    int b = 2;
    test_交换(a, b);
    double c = 2.0;
    double d = 3.0;
    test_交换(c, d);
    
    // 显示指定类型
    test_交换<int>(a, b);
    return 0;
}
