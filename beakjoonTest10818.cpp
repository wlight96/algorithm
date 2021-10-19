#include<bits/stdc++.h>
using namespace std;
int num = 0;
int main(){
    cin >> num;
    int arr[num];
    for (int i =0; i<num; i++){
        cin >> arr[i];
    }
    sort(arr,arr + num);
    cout << arr[0] << " "<< arr[num-1] << "\n";
}