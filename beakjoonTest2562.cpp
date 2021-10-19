#include<bits/stdc++.h>
using namespace std;
int arr[9];
int max_num = 0;
int max_n = 0;
int main(){
    for(int i=0; i<9; i++){
        cin >> arr[i];
        if (max_num <= arr[i]){
            max_num = arr[i];
            max_n = i;
        }
    }
    cout<< max_num << "\n" << max_n + 1 << "\n";
}