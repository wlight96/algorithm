#include<bits/stdc++.h>

using namespace std;

int N = 0;
int line_n = 0;
int main(){
    cin >> N;
    float avg[N];
    for (int i =0; i<N; i++){
        cin >> line_n;
        int arr[line_n];
        int sum = 0;
        for(int j =0; j<line_n; j++){
            cin >> arr[j];
            sum += arr[j];
        }
        avg[i] = sum/float(line_n);
        int count = 0;
        for(int j =0; j<line_n; j++){
            if (arr[j]>avg[i]) count ++;
        }avg[i] = (count/float(line_n)) * 100 ;    
    }
    for(int i =0; i<N; i++){
        printf("%.3f%% \n",avg[i]);
    }
}