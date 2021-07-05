//
//  C语言类的概念.c
//  类
//
//  Created by MOMO on 2021/7/2.
//

#include <stdio.h>
#include "string.h"

struct Person {
    char name[64];
};
void PersonEat(struct Person *p) {
    
    printf("%s在吃饭", p->name);
}
void test() {
    struct Person d;
    strcpy(d.name, "多少度");
}
