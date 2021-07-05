//
//  main.c
//  增强C
//
//  Created by MOMO on 2021/7/1.
//

#include <stdio.h>
// 重定义
int a;
int a = 1;

// 返回值没有检测, 形参类型没有检测, 形参个数没有检测
getRectS(w, h) {
    return w * h;
}
//const int a_A = 100; // 受到常量区的保护, 无法修改
int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    const int a_A = 100;
    int *p = &a_A;
    *p = 200; // 修改不成功, 教程说修改成功, 不对
    printf("%d", a_A);
    int arr[a_A];
    
    // 三母运算符
    
    return 0;
}
