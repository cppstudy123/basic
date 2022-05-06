//
//  MyString.hpp
//  字符串练习
//
//  Created by MOMO on 2021/7/19.
//

#ifndef MyString_hpp
#define MyString_hpp

#include <stdio.h>
#include <iostream>
#include <ostream>
#include <cstring>
using namespace std;

class MyString {
    friend istream& operator>>(istream &cin, MyString &str);
    friend ostream& operator<<(ostream &cout, MyString &str);
public:
    MyString(char *str);
    MyString(const MyString &mystr);
    MyString& operator=(const MyString &mystr);
    char& operator[](int index);
    MyString operator+(const char *str);
    MyString operator+(const MyString &mystr);
    ~MyString();
private:
    char *pString;// 维护堆区开辟的字符数组
    int m_size;
};


#endif /* MyString_hpp */
