//
//  myArray.hpp
//  练习
//
//  Created by MOMO on 2021/7/8.
//

#ifndef myArray_hpp
#define myArray_hpp
#if defined __cplusplus
#include <stdio.h>
class MyArray {
public:
    MyArray();
    MyArray(int capatity); // 有参构造
    MyArray(const MyArray &arr);
    void pushBack(int val);
    void setData(int, int val);
    int getData(int pos);
private:
    int size;
    int capatity;
    int *pArray;
};
#endif /* __cplusplus */

#endif /* myArray_hpp */


