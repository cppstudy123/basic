//
//  main.c
//  结构体
//
//  Created by MOMO on 2021/7/1.
//

#include <stdio.h>

typedef struct Person {
    char name[64];
    int age
} PP;

PP p = {"sdfsdf", 20};

// 匿名结构体, 不常用

struct {
    char name[64];
    int age
} p2 = {"sdf", 23}; // 这里直接顶一个一个变量

// 创建在栈上

// 创建在堆上
// 堆上不能直接赋值
void test04() {
    struct PP p = {"sdf", 233};
    struct PP *p2 = malloc(sizeof(struct PP));
    strcpy(p2->name, "sdfs");
    p2->age = 23;
}
// 堆上创建
struct PP pp[] = malloc(sizeof(struct PP) * 4);

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    return 0;
}
