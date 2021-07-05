//
//  main.cpp
//  增强
//
//  Created by MOMO on 2021/7/1.
//

#include <iostream>

int a;
//int a = 1;// 这里会报错

int getRectS(int w, int h) {
    return w * h;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    
    const int a_A = 100;
    int *p = (int *)(&a_A);
    *p = 200; // 当对const修饰的局部变量取地址的手, 编译器分配的是临时的内存空间temp, p指针指向的也是temp
    printf("%d", a_A);
    
    return 0;
}
