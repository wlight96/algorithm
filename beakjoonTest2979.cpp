#include<bits/stdc++.h>
using namespace std;
int a, b, c;
int t[2];
int m[100];
int cost = 0;
int main(){
    cin >> a >> b >> c;
    for(int i =0; i<3; i++){
        cin >> t[0] >> t[1];
        for(int j=t[0]; j<t[1]; j++){
            m[j]+=1;
        }
    }
    for(int i=0; i<100; i++){
        if(m[i]==1){
            cost += a;
        }else if(m[i]== 2){
            cost += b*2;
        }else if(m[i] == 3){
            cost += c*3;
        }
    }
    cout << cost <<'\n';
}