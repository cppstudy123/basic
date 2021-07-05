//
//  函数重载.cpp
//  类
//
//  Created by MOMO on 2021/7/2.
//

#include <stdio.h>
/**
 
 参数个数不同
 类型不同
 
 返回值不能成为重载的条件
 */


/**
 函数重载中,引用的两个版本
 
 */
void myFunc(int &a) {
    
}
void myFunc(const int &a) {
    
}
// myFunc(a);
// myFunc(10);
/**
 重载遇到默认值, 如果少参数, 也会出现二义性
 */

/**
 函数重载的原理
 会将函数重命名
 */
