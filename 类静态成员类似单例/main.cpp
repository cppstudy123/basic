//
//  main.cpp
//  类静态成员类似单例
//
//  Created by MOMO on 2021/7/12.
//

#include <iostream>
#include <map>
using namespace std;
struct Jisuan {
    char *key;
    clock_t clock;
};
class TimeJi {
public:
    static map<string, string>keyMap;
    static void timeStart() {
        TimeJi::keyMap["key"] = "clock()";
    }
    static void timeEnd(string key) {
        clock_t end = clock();
//        printf("方法2Clock,diff%f\n", float(end - TimeJi::keyMap[key])/CLOCKS_PER_SEC);
    }
};
int main(int argc, const char * argv[]) {
    // insert code here...
//    TimeJi::timeStart();
    map<int, string> mapStudent;
//    for (int i = 0; i < 10000000000; i++) {
//        int j = 0;
//    }
//    TimeJi::timeEnd("123");
    return 0;
}
