//
//  main.cpp
//  命名空间
//
//  Created by MOMO on 2021/7/1.
//

#include <iostream>
using namespace std;
#include "game2.hpp"
#include "game1.hpp"

namespace A {
int B = 12;
}

namespace Us1 {
int u1 = 2;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    Game2::shot();
    Game1::shot();
    cout << A::B << endl;
//    cout << Game1::A << endl;
    Game_1::shot2();
    
    // 就近原则
    int u1 = 4;
    using namespace Us1;
    cout << u1 << endl; // 这里打印4, 不是打印2
    return 0;
}
