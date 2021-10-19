#include<bits/stdc++.h>
using namespace std;
int arr[10];
int num = 1;
int main(){
    for(int i=0; i<10; i++){
        cin >> arr[i];
        arr[i] = arr[i] % 42;
    }
    sort(arr,arr+10);
    for(int i=1; i<10; i++){
        if(arr[i-1] != arr[i]){
            num++;
        }
    }cout << num << '\n';
}