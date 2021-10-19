#include<bits/stdc++.h>
using namespace std;
int N = 0;
int M = 0;
int sum = 0;
int main(){
    cin >> N;
    int arr[N];
    for(int i = 0; i<N; i++){
        cin >> arr[i];
        if(i == 0){
            M = arr[i];
        }else{
            if(M < arr[i]){
                M = arr[i];
            }
        }sum += arr[i];
    }
    cout << sum/double(N*M)*100 <<'\n'; 
}