//
//  main.cpp
//  单例模式
//
//  Created by MOMO on 2021/7/5.
//

#include <iostream>
#include "cstring"
using namespace std;


class ChairMan {
private:
    ChairMan();// 先将构造函数私有化
    static ChairMan *singleMan;
    // copy构造函数也私有化
    ChairMan(const ChairMan &p);
public:
    static ChairMan *getInstance() {
        return singleMan;
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
