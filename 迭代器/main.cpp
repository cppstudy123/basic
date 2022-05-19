//
//  main.cpp
//  迭代器
//
//  Created by rongping li on 2022/5/16.
//
using namespace std;
#include <iostream>
#import <vector>
void test_数组_迭代器() {
    int arr[3] = {1, 2, 3};
    int *p = arr;
    for (int i = 0; i < sizeof(arr); i++) {
        cout << *(p++) << endl;
    }
}
void test_vector() {
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    vector<int>::iterator begin = v.begin();
    
    vector<int>::iterator end = v.end();
    while(begin != end) {
        cout << *begin << endl;
        begin++;
    }
}
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
//    test_数组_迭代器();
    test_vector();
    return 0;
}
