#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    int check = 0;
    cin >> num;
    string arr[num];
    for(int i=0; i< num; i++){
        cin>> arr[i];
        int az[26] = {0,};
        char before_a = arr[i][0];
        az[arr[i][0]] = 1;
        for(int j = 0; j < arr[i].length(); j++){
            if(before_a != arr[i][j]){
                az[arr[i][j] - 'a'] +=1;
            }before_a = arr[i][j];
        }for(int j = 0; j< 26; j++){
            if (az[j]>1){
                check +=1;
                cout<< arr[i]<< " ";
                break;
            }
        }
    }cout << num - check;
}