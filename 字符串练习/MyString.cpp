//
//  MyString.cpp
//  字符串练习
//
//  Created by MOMO on 2021/7/19.
//

#include "MyString.hpp"
using namespace std;
ostream& operator<<(ostream &cout, MyString &str) {
    cout << str.pString << endl;
    return cout;
}
istream& operator>>(istream &cin, MyString &str) {
    if (str.pString) {
        delete [] str.pString;
        str.pString = NULL;
    }
    char buf[1024];
    cin >> buf;
    str.pString = new char[strlen(buf) + 1];
    strcpy(str.pString, buf);
    str.m_size = strlen(buf);
    cout << "重新赋值" << endl;
    return cin;
}
MyString::MyString(char *str) {
    printf("构造调用\n");
    this->pString = new char[strlen(str) + 1];
    strcpy(this->pString, str);
    this->m_size = strlen(str);
}
char& MyString::operator[](int index) {
    return this->pString[index];
}
MyString MyString::operator+(const char *str) {
    int len = this->m_size + strlen(str) + 1;
    char *temp = new char[len];
    memset(temp, 0, len); // 清空
    strcat(temp, this->pString);
    strcat(temp, str);
    MyString news = temp;
    return news;
}
MyString MyString::operator+(const MyString &str) {
    int len = this->m_size + str.m_size + 1;
    char *temp = new char[len];
    memset(temp, 0, len); // 清空
    strcat(temp, this->pString);
    strcat(temp, str.pString);
    MyString news = temp;
    return news;
}
MyString& MyString::operator=(const MyString &mystr) {
    if (this->pString != NULL) {
        delete [] this->pString;
        this->pString = NULL;
    }
    this->pString = new char[strlen(mystr.pString) + 1];
    strcpy(this->pString, mystr.pString);
    return *this;
}

MyString::MyString(const MyString &mystr) {
    printf("copy构造调用\n");
    this->pString = new char[strlen(mystr.pString) + 1];
    strcpy(this->pString, mystr.pString);
    this->m_size = mystr.m_size;
}

MyString::~MyString() {
    // 析构函数
    printf("析构调用\n");
    if (this->pString != NULL) {
        delete [] this->pString;
        this->pString = NULL;
    }
}
