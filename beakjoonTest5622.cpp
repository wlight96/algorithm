#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[26] = { 3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 8, 8, 8, 8, 9, 9, 9, 10, 10, 10, 10 };
    string sen;
    int sec = 0;
    cin >> sen;
    for(int i =0; i<sen.length(); i++){
        sec += (arr[sen[i]-'A']);
    }cout<< sec;
}