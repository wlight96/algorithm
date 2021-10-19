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
            // �̱� ��� count
            if(head2head[i][j] == 'W'){
                countw++;
                // ������ ū ����� �̱� �� ����
                if(weights[i] < weights[j]){
                    ww++;
                }
            }// ġ�� ��� �� ���� 
            if(head2head[i][j] == 'N'){
                round --;
            }
        }// ġ�� ��� �� �� 0�̸� �·� 0
        if(round == 0){
            countw = 0;
            ww = 0;
        }else{// �ƴϸ� �·� ���
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
            // �·� ��
            if(wins[answer[i]]>wins[answer[j]]){
                answer = change(answer,i,j);
            }// �·��� ���� ���
            else if(wins[answer[i]] == wins[answer[j]]){//���Ժ� �¼� ��
                if(weight_win[answer[i]] > weight_win[answer[j]]){
                    answer = change(answer,i,j);
                }else if(weight_win[answer[i]] == weight_win[answer[j]]){//���Ժ� �¼��� �������
                    if(weights[answer[i]]>weights[answer[j]]){//���� ��
                        answer = change(answer,i,j);
                    }else if(weights[answer[i]]==weights[answer[j]]){// ���� ����
                        if(i<j){// ���� ��
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