#include<bits/stdc++.h>
using namespace std;
int N;
string ox;
int main(){
    cin >> N;
    int arr[N]; // 점수 기록
    for(int i =0; i<N; i++){
        cin >> ox;
        arr[i] = 0;
        int score = 0;
        for(int j=0; j < ox.length(); j++){
            if(ox[j] == 'O'){
                score ++;
            }else{
                score = 0;
            }arr[i] += score;
        }
    }
    for(int i=0; i<N; i++){
        cout << arr[i] << '\n';
    }
}