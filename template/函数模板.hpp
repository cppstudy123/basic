//
//  函数模板.cpp
//  template
//
//  Created by rongping li on 2022/5/19.
//
// 形参类型, 和返回类型不确定
// 也就是说, 类型参数化
#include <stdio.h>
//template<typename T1>// 这种也可以
template<class T> // 告诉编译器, 如果下面出现T, 不要报错, 要紧紧跟着函数啊
void test_交换(T &a, T &b) {
    
}

// 排序联系
template<typename T>
void test_my_sort(T arr[], int len) {
    for (int i = 0; i < len; i++) {
        int max = i;
        for (int j = i + 1; j < len; j++) {
            if (arr[max] < arr[i]) {
                max = j;
            }
        }
        if (max != i) {
            test_交换(arr[max], arr[i]);
        }
    }
}
