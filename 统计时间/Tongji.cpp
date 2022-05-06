//
//  Tongji.cpp
//  统计时间
//
//  Created by MOMO on 2021/7/12.
//

#include "Tongji.hpp"

void Tongji::timeStart(string key) {
    this->keyMap[key] = clock();
}
void Tongji::timeEnd(string key) {
    clock_t end = clock();
    printf("%s耗时:%f\n", key.c_str(), float(end - this->keyMap[key])/CLOCKS_PER_SEC);
}
Tongji* Tongji::m_instance_ptr = nullptr;
