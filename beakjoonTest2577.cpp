#include <bits/stdc++.h>
using namespace std;
int arr[10];
int A = 0;
int B = 0;
int C = 0;
int main(){
    int num = 0;
    cin >> A;
    cin >> B;
    cin >> C;
    num = A*B*C;
    int n = 0;
    int i = 1;
    while (num != n){
        n = num % int(pow(10,i));
        arr[int(n/pow(10,i-1))] +=1;
        i++;
    }
    for(int j = 0; j <10; j++){
        cout << arr[j]<<"\n";
    }
}
