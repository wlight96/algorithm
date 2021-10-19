#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    int b;
    cin >> a;
    cin >> b;
    int reverse_a = 0;
    int reverse_b = 0;
    for(int i = 2; i>-1; i--){
        reverse_a += a%10 * pow(10,i); 
        reverse_b += b%10 * pow(10,i);
        a = a/10;
        b = b/10;
    } 
    if(reverse_a>reverse_b){
        cout << reverse_a;
    }else{
        cout << reverse_b;
    }
}