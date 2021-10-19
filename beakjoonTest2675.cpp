#include<bits/stdc++.h>
using namespace std;
int main(){
    int n = 0;
    cin >> n;
    string sen[n];
    int times[n];
    for(int i =0; i< n; i++){
        cin >> times[i];
        cin >> sen[i]; 
    }
    for(int i =0; i< n; i++){
        for(int j =0; j< sen[i].length(); j++){
            for(int k =0; k< times[i]; k++){
                cout << sen[i][j];
            }
        }cout<<"\n"; 
    }
} 