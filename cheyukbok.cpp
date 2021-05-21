#include <string>
#include <vector>
#include<bits/stdc++.h>
using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    int count = 0;
    sort(lost.begin(), lost.end());
    sort(reserve.begin(), reserve.end());
    for(int i=0; i<lost.size(); i++){
        for(int j=0; j<reserve.size(); j++){
            if(lost[i]-1<= reserve[j]&& reserve[j]<=lost[i]+1){
                count++;
                lost[i] = 0;
                reserve[j] = 0;
                break;
            }
        }
    }
    answer =n - (lost.size() - count);
    return answer;
}
int main(){
    cout << solution(5, {1,2,3}, {2,3,4})<< '\n';
    cout << solution(5, {2,4}, {3})<< '\n';
    cout << solution(2, {1}, {2})<<'\n';
}