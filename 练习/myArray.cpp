//
//  myArray.cpp
//  练习
//
//  Created by MOMO on 2021/7/8.
//
#pragma onne
#include "myArray.hpp"

MyArray::MyArray() {
    this->size = 0;
    this->capatity = 100;
    this->pArray = new int[this->capatity];
}
MyArray::MyArray(const MyArray &myarr) { // 跟自身一样的类, 是可以访问私有的
    this->size = myarr.size;
    this->capatity = myarr.capatity;
    this->pArray = myarr.pArray;
}
void MyArray::pushBack(int val) {
    this->pArray[this->size] = val;
}
int MyArray::getData(int pos) {
    return this->pArray[pos];
}
