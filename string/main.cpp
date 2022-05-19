//
//  main.cpp
//  string
//
//  Created by rongping li on 2022/5/16.
//
// string 是一个类, char是一个指针
#include <iostream>
using namespace std;
#include <string>

void test_构造函数() {
    // string 构造函数
    // 默认构造
    string str;
    // copy构造
    string str2(str);
    string str3 = str;
    // 试用字符串来初始化
    string str4 = "abc";
    string str5(10, 'a');
    cout << str5 << endl;
}
void test_赋值() {
    string str = "abcde";
    string str2 = str;
    string str3;
    str3.assign("adbcd", 2);
    string str4;
    // 截取赋值
    str4.assign(str, 1, 2);
    cout << str4 << endl;
}
void test_成员构造() {
    string str1 = "hello, world";
    for (int i = 0; i < str1.size(); i++) {
        cout << str1.at(i) << endl;
    }
    // [] 和 at的区别, at越界不会崩溃
    try {
//        cout << str1[100] << endl;
        cout << str1.at(100) << endl;
    } catch(...) {
        cout << "越界异常" << endl;
    }
}
void test_拼接() {
    string str1 = "我";
    string str2;
    str2 = str1 + "爱北京";
    cout << str2 << endl;
    str1.append("爱天安门");
    cout << str1 << endl;
}
void test_查找和替换() {
    string str1 = "abcde";
    int pos = str1.find("bcd11");
    cout << pos << endl;
    // 找不到返回-1
    int pos2 = str1.rfind("bc");// 从后面往前查, 和find结果的结果一样, 只是内部查找方式不一样
    cout << pos2 << endl;
    // 替换
    str1.replace(1, 3, "3333");
    cout << str1 << endl;
}
void test_比较() {
    string str1 = "b";
    string str2 = "a";
    if (str1.compare(str2) == 0) {
        cout << "等于" << endl;
    } else if (str1.compare(str2) == 1) {
        cout << "大于" << endl;
    } else {
        cout << "小于" << endl;
    }
}
void test_截取() {
    string str1 = "abc";
    string str2 = str1.substr(1, 2);
    cout << str2 << endl;
    string email = "9858567294@qq.com";
    cout << email.substr(0, email.find("@")) << endl;
}
void test_插入和删除() {
    string str1 = "abcde";
    str1.insert(1, "1111");
    cout << str1 << endl;
    str1.erase(1, 3);
    cout << str1 << endl;
}
void test_string_char_转化() {
    string str1 = "abcde";
    const char *p = str1.c_str();
    cout << p << endl;
    // char *p 能够隐迟转化为string;
    // string 不能隐式转化为char
    
}
void test_小练习_大小写() {
    string str1 = "abcde";
    for (int i = 0; i < str1.size(); i++) {
        str1[i] = toupper(str1[i]);
    }
    cout << str1 << endl;
}
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
//    test_构造函数();
//    test_赋值();
//    test_成员构造();
//    test_拼接();
//    test_查找和替换();
//    test_比较();
//    test_截取();
//    test_插入和删除();
//    test_string_char_转化();
    test_小练习_大小写();
    return 0;
}
