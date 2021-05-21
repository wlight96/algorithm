#include <cstdio>
#include <iostream>
#include <thread>

using namespace std;

void func_A(int id, int length) {
    for(int i=1; i<=length; i++) {
        printf("thread[%d] : count -> %d\n", id, i);
    }
}

void func_B(int id, int length) {
    for(int i=1; i<=length; i++) {
        printf("thread[%d] : count -> %d\n", id, i);
    }
}

void func_C(int id) {
    for(int i=1; i<= 10; i++) {
        printf("thread[%d] :학번 이름 출력\n", id);
    }
}

int main() {
    thread t1(func_A,1,5);

    thread t2(func_B,2,10);

    thread t3(func_C,3);  

    t1.join();

    t2.join();

    t3.join();
    
    return 0;
}