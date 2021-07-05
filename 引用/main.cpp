//
//  main.cpp
//  引用
//
//  Created by MOMO on 2021/7/1.
//
/**
 引用必须声明的时候初始化
 引用一旦初始化, 就无法引用其他变量
 */
#include <iostream>

void 取别名() {
    int a = 100;
    int &b = a; // 应用就是取别名, &就是声明一个引用
}
void 数组建立引用() {
    int arr[10];
    
    int (&pArr)[10] = arr;
    
    for (int i = 0; i < 10; i++) {
        arr[i] = i;
    }
    
    for (int i = 0; i < 10; i++) {
        printf("%d\n", pArr[i]);
    }
    
    // 先定义数组类型, 在通过类型定义引用
    typedef int(ARR_TYPE)[10];
    
    ARR_TYPE &ppArr = arr;
    
    for (int i = 0; i < 10; i++) {
        printf("%d\n", ppArr[i]);
    }
}
// 值传递
void mySwap01 (int a, int b) {
    // 值传递只能修改内部, 不能修改外部
    int temp = a;
    a = b;
    b = temp;
    printf("%d --- %d\n", a, b);
}
// 指针传递
void mySwap02 (int *a, int *b) {
    // 值传递只能修改内部, 不能修改外部
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("%d --- %d\n", *a, *b);
}
// 引用传递
void mySwap03 (int &a, int &b) {
    // 值传递只能修改内部, 不能修改外部
    int temp = a;
    a = b;
    b = temp;
    printf("%d --- %d\n", a, b);
}
void 引用的本质() {
    int a = 1;
    int &b = a; // 编译器自动转化为 int const *b = &a;
    b = 20; // 编译器自动转化为 *b = 20;
}


void 常量引用(const int &b) { // 用来修改参数中写形参, 防止误操作
    const int &a = 10; // 加了const, 编译器相当于写了 int temp = 10; cosnt int &a = temp;
    
}

int main1(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
//    数组建立引用();
    int a = 1;
    int b = 2;
    // 值传递
//    mySwap01(a, b);
//    printf("%d --- %d\n", a, b);
    
    // 指针传递
//    mySwap02(&a, &b);
//    printf("%d --- %d\n", a, b);
    
    // 引用传递
//    mySwap03(a, b);
//    printf("%d --- %d\n", a, b);
    
    return 0;
}
