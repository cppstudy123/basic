//
//  PrevAddOperator.hpp
//  运算法重载练习
//
//  Created by MOMO on 2021/7/13.
//

#ifndef PrevAddOperator_hpp
#define PrevAddOperator_hpp

#include <stdio.h>
using namespace std;
class PrevAddOperator {
    friend ostream& operator<<(ostream& cout, PrevAddOperator &p);
public:
    PrevAddOperator();
    PrevAddOperator& operator++();
    PrevAddOperator& operator++(int);// 加个int就是后置
private:
    int m_Num;
};


#endif /* PrevAddOperator_hpp */
