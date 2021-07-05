//
//  内联函数.cpp
//  类
//
//  Created by MOMO on 2021/7/1.
//

#include <stdio.h>
// 宏缺陷1, 必须加括号保证运算完整
// 宏展开的时候, 造成缺陷

// 宏缺陷2, 加了括号还是没用
// 还是宏展开造成的 ++a<b?++a:b


#define MYADD(x, y) ((x)+(y));

#define MYCOMPARE(a,b) a<b?a:b;

void test02() {
    int a = 10;
    int b = 20;
    int ret = MYCOMPARE(++a, b);
}

/**
 内联函数可以像宏一样展开
 声明和实现都要加inline
 优势:
    用空间换时间
 */
inline int test_3() {
    return 1;
}

/**
 类内部的成员函数, 都隐式的加了inline
 // 那些情况, 编译器不会当做内联进行编译
 1. 不存在循环语句
 2. 不能存在过多的条件判断
 3. 函数不能过于庞大
 4. 不能进行取地址操作
 */
