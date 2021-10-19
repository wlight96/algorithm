#include<bits/stdc++.h>
using namespace std;

int m[10001];
int d(int n){
    int a = n;
    if(n==0){
        return a;
    }else{
        return a%10 + d(n/10);
    }
}

int main(){
    for(int i = 1; i< 10001; i++){
        m[i + d(i)] = 1;
    }
    for(int i = 1; i< 10001; i++){
        if(m[i] != 1){
            cout << i << "\n"; 
        }
    }
}