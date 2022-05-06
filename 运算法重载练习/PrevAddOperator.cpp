//
//  PrevAddOperator.cpp
//  运算法重载练习
//
//  Created by MOMO on 2021/7/13.
//
#include <iostream>
#include <ostream>
#include "PrevAddOperator.hpp"
PrevAddOperator::PrevAddOperator() {
    m_Num = 0;
}
PrevAddOperator& PrevAddOperator::operator++() {
    this->m_Num = this->m_Num + 1;
    return *this;
}

