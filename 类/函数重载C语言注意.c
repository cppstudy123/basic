//
//  函数重载.c
//  类
//
//  Created by MOMO on 2021/7/2.
//
/**
 对于C和C++混用的时候, 一定要加上这个, 不然C++中是找不到这个show方法的
 因为C++的函数重载, 原理就是讲函数重命名
 */
#include <stdio.h>
#ifdef __cplusplus
extern "C" {
#endif

    void show();

#ifdef __cplusplus
}
#endif
