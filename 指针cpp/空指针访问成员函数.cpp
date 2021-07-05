
#include <iostream>
#include "cstring"
using namespace std;

class Person2 {
public:
    Person2(int age){
        this->age = age;
    }
    void showAge() {
        
    }
    void showAge2() {
        if (this != NULL) {
            // 防止空指针
        }
    }
    int age;
};
int main_2(int argc, const char * argv[]) {
    Person2 *p = NULL;
    p->showAge();
    return 0;
}
