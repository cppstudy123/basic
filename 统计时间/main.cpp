//
//  main.cpp
//  统计时间
//
//  Created by MOMO on 2021/7/12.
//

#include <iostream>
#include <stdio.h>
#include <unistd.h>// 这个可以引入sleep方法
#include <time.h>
#include "Tongji.hpp"
void 理解时间函数秒() {
    // time_t 是一个类型
    time_t start;
    time(&start);
//  tm也是一个结构体
//    struct tm
//    {
//        int tm_sec;  /*秒，正常范围0-59， 但允许至61*/
//        int tm_min;  /*分钟，0-59*/
//        int tm_hour; /*小时， 0-23*/
//        int tm_mday; /*日，即一个月中的第几天，1-31*/
//        int tm_mon;  /*月， 从一月算起，0-11*/  1+p->tm_mon;
//        int tm_year;  /*年， 从1900至今已经多少年*/  1900＋ p->tm_year;
//        int tm_wday; /*星期，一周中的第几天， 从星期日算起，0-6*/
//        int tm_yday; /*从今年1月1日到目前的天数，范围0-365*/
//        int tm_isdst; /*日光节约时间的旗标*/
//    };
    tm *info = gmtime(&start);
    printf("秒:%d", info->tm_sec);
    
    
}
/**
 time 是返回从1970开始到现在的时间
 close是返回从开启进程到程序中调用clock之间的计时单元
 */
void 理解时间函数毫秒() {
    // time_t 是一个类型
    struct timeval start;
//    gettimeofday(&start, NULL);
//  tm也是一个结构体
//    struct tm
//    {
//        int tm_sec;  /*秒，正常范围0-59， 但允许至61*/
//        int tm_min;  /*分钟，0-59*/
//        int tm_hour; /*小时， 0-23*/
//        int tm_mday; /*日，即一个月中的第几天，1-31*/
//        int tm_mon;  /*月， 从一月算起，0-11*/  1+p->tm_mon;
//        int tm_year;  /*年， 从1900至今已经多少年*/  1900＋ p->tm_year;
//        int tm_wday; /*星期，一周中的第几天， 从星期日算起，0-6*/
//        int tm_yday; /*从今年1月1日到目前的天数，范围0-365*/
//        int tm_isdst; /*日光节约时间的旗标*/
//    };
    
    
}

void 方法1精确到秒() {
    // time_t 用来存储从1970年到x现在经历了多少秒
    time_t start, end;
    time(&start);
    for (int i = 0; i < 1000000000; i++) {
        int j = 0;
        j++;
        int k = 0;
        k++;
    }
    time(&end);
    double cost = difftime(end, start);
    
    std::cout << cost << std::endl;
}
void 方法2Clock() {
    clock_t clock1, clock2;
    float diff_clock;
    clock1 = clock();
    printf("开始计时\n");
    for (int i = 0; i < 1000000000; i++) {
        int j = 0;
        j++;
        int k = 0;
        k++;
    }
    clock2 = clock();
    printf("方法2Clock,diff%f\n", float(clock2 - clock1)/CLOCKS_PER_SEC);
}
int main(int argc, const char * argv[]) {
    // insert code here...
    理解时间函数毫秒();
    方法2Clock();
    Tongji *t = Tongji::shareInstance();
    t->timeStart("嘻嘻");
    for (int i = 0; i < 1000000; i++) {
        int j = 0;
        j++;
        int k = 0;
        k++;
    }
    t->timeEnd("嘻嘻");
    return 0;
}
