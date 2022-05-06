//
//  main.cpp
//  字符串练习
//
//  Created by MOMO on 2021/7/12.
//

#include <iostream>
#include "MyString.hpp"
using namespace std;

void 逐字读取() {
    char *p = "c0,0,600,600;v;d12,0,0,774,778,26.4,2.4000000000000004,59,59;e;";
    int length = 63;
    cout << *p << endl;
    char *end = p + length;
    cout << end << endl;
    while (p != "") {
        cout << p << endl;
        cout << *p << endl;
        p++;
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    MyString str = "abc";
    MyString str1 = "abc1";
    MyString str2 = str;
    cout << str2 << endl;
    str2 = str1;
    cout << str2 << endl;
    cout << "相加" << endl;
    char *temp2 = "sdfsdfsd";
    MyString str3 = str2 + temp2;
    cout << "相加1后的值" << str3 << endl;
    MyString str4 = str2 + str3;
    cout << "相加2后的值" << str4 << endl;
    cout << "重新赋值" << endl;
    cin >> str2;
    cout << "打印心智" << str2 << endl;
    return 0;
}
