//
//  构造函数的调用规则.cpp
//  类
//
//  Created by MOMO on 2021/7/2.
//

#include <stdio.h>
#include "iostream"
#include "cstring"
using namespace std;
/**
特点:
 1. 编译节点分配内存
 2. 静态成员, 所有对象都共享同一份数据
 3. 私有的的静态变量, 是访问不到的
 4. 静态成员,一定要在外面初始化, 而且只能被初始化一次, 不然就会报错: ld: symbol(s) not found
使用:
 类内声明, 类外初始化
访问模式:
 通过类名,和对象都能访问
 */
class PersonStatic {
public:
    static int m_a;
    static void func() {
        /**
         静态成员函数只能访问静态成员变量
         */
    }
};
// 4. 静态成员,一定要在外面初始化, 而且只能被初始化一次, 不然就会报错: ld: symbol(s) not found
// 不初始化的话, 在静态函数里面访问不了, 也会报错
int PersonStatic::m_a = 120;
int main() {
    cout << "静态成员变量值" << PersonStatic::m_a << endl;
    PersonStatic *ps = new PersonStatic;
    ps->m_a = 100;
    cout << "静态成员变量值" << ps->m_a << endl;
    return 0;
}
