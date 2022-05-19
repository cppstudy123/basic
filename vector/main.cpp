//
//  main.cpp
//  vector
//
//  Created by rongping li on 2022/5/17.
//

#include <iostream>
#include <vector>
using namespace std;
// 动态增长, 申请更大空间, 然后copy数据过去
void test_容量() {
    // 动态扩展的, 扩展数不一定
    vector<int> v;
    for (int i = 0; i< 10; i++) {
        v.push_back(i);
        cout << v.capacity() << endl;
    }
}
void test_打印容器(vector<int>&v) {
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout << *it << endl;
    }
}
void test_构造函数() {
    // v.begin v.end
    vector<int> v;
    int arr[] = {1,2,3,4,5};
    vector<int> v2(arr, (arr + sizeof(arr)/sizeof(int)));// (arr + sizeof(arr)/sizeof(int)) 表示数组的最后一个指针 arr就表示数组的第一个指针
    vector<int> v3(v2.begin(), v2.end());
    test_打印容器(v3);
    // 指定数量和数值
    vector<int> v4(10, 100);
    test_打印容器(v4);
}
void test_赋值() {
    int arr[] = {1,2,3,4,5};
    vector<int> v0(arr, (arr + sizeof(arr)/sizeof(int)));
    // assign 赋值
    vector<int> v1(10, 100);
    vector<int> v2;
    v2.assign(v1.begin(), v1.end());
    test_打印容器(v2);
    // swap 赋值
    v2.swap(v0);
    test_打印容器(v2);
}
void test_size() {
    int arr[] = {1,2,3,4,5};
    vector<int> v0(arr, (arr + sizeof(arr)/sizeof(int)));
    cout << "大小" << v0.size() << endl;
}
void test_empty() {
    // 判断是否为空
    int arr[] = {1,2,3,4,5};
    vector<int> v0(arr, (arr + sizeof(arr)/sizeof(int)));
    cout << "大小" << v0.empty() << endl;
    // 除了empty, 还有size 也可以判断是否为空
}
void test_resize() {
    int arr[] = {1,2,3,4,5};
    vector<int> v0(arr, (arr + sizeof(arr)/sizeof(int)));
    v0.resize(20, 99);
    test_打印容器(v0);
    v0.resize(1);// 如果元素过多, 就会被删除
    test_打印容器(v0);
}
void test_swap_收缩空间() {
    vector<int> v0;
    for (int i = 0; i < 10000; i++) {
        v0.push_back(i);
    }
    cout << v0.capacity() << endl;
    cout << v0.size() << endl;
    vector<int>(v0).swap(v0);
    cout << v0.capacity() << endl;
    cout << v0.size() << endl;
}
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
//    test_容量();
//    test_构造函数();
//    test_赋值();
//    test_size();
//    test_empty();
//    test_resize();
    test_swap_收缩空间();
    return 0;
}
