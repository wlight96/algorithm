#include<bits/stdc++.h>
using namespace std;
bool han(int n){
    bool ox = true;
    int m = n;
    vector<int> v;
    int size = 0;
    while (m != 0){
        v.push_back(m%10);
        m = m/10;
        size ++;
    }
    if (size < 3) return ox;
    else{
        if (v[size-1]-v[size-2] != v[size-2] - v[size-3]){
            ox = false;
        }return ox;  
    }
}

int main(){
    int n,count =0;
    cin >> n;
    for(int i = 1; i<=n; i++){
        if(han(i)){
            count ++;
        }
    }cout<< count;
}