//
//  Tongji.hpp
//  统计时间
//
//  Created by MOMO on 2021/7/12.
//

#ifndef Tongji_hpp
#define Tongji_hpp
#include <string>
#include <time.h>
#include <stdio.h>
#include <map>
using namespace std;

class Tongji {
public:
    static Tongji *m_instance_ptr;
    static Tongji* shareInstance() {
        if(m_instance_ptr==nullptr){
            m_instance_ptr = new Tongji;
        }
        return m_instance_ptr;
    }
    void timeStart(string key);
    void timeEnd(string key);
private:
    map<string, clock_t> keyMap;
};

#endif /* Tongji_hpp */
