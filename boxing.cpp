#include <bits/stdc++.h>

using namespace std;
vector<int> change(vector<int>v, int a, int b){
    int tmp = 0;
    tmp = v[a];
    v[a] = v[b];
    v[b] = tmp;
    return v;
}

vector<int> solution(vector<int> weights, vector<string> head2head) {
    vector<int> answer;
    vector<double> wins;
    vector<int> weight_win;
    for(int i =0; i< weights.size(); i++){
        answer.push_back(i);
        double countw = 0;
        int ww = 0;
        int round = weights.size();
        for(int j =0; j<head2head.size(); j++){
            // 이긴 경기 count
            if(head2head[i][j] == 'W'){
                countw++;
                // 몸무게 큰 사람을 이긴 거 세기
                if(weights[i] < weights[j]){
                    ww++;
                }
            }// 치룬 경기 수 세기 
            if(head2head[i][j] == 'N'){
                round --;
            }
        }// 치룬 경기 수 가 0이면 승률 0
        if(round == 0){
            countw = 0;
            ww = 0;
        }else{// 아니면 승률 계산
            if (countw == 0){
                countw = 0;
                ww = 0;
            }else{
                countw = countw/(double)round;        
            }
        }
        wins.push_back(countw);
        weight_win.push_back(ww);
    }
    for(int i = 0; i < weights.size(); i++){
        for(int j =i+1; j < weights.size(); j++){
            // 승률 비교
            if(wins[answer[i]]>wins[answer[j]]){
                answer = change(answer,i,j);
            }// 승률이 같을 경우
            else if(wins[answer[i]] == wins[answer[j]]){//무게별 승수 비교
                if(weight_win[answer[i]] > weight_win[answer[j]]){
                    answer = change(answer,i,j);
                }else if(weight_win[answer[i]] == weight_win[answer[j]]){//무게별 승수가 같을경우
                    if(weights[answer[i]]>weights[answer[j]]){//무게 비교
                        answer = change(answer,i,j);
                    }else if(weights[answer[i]]==weights[answer[j]]){// 무게 같음
                        if(i<j){// 순서 비교
                            answer = change(answer,i,j);
                        }
                    }
                }
            }
        }
    }
    for(int i =0; i< weights.size(); i++){
        answer[i] +=1;
    }
    reverse(answer.begin(), answer.end());
    return answer;
}