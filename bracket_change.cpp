#include<bits/stdc++.h>
#include <string>
#include <vector>
using namespace std;

// 올바르다면 반환 값에 추가 아니면 4번 실행. 
// v 의 r 과  l 의 갯수가 다르면, 재귀 실행
// 
string solution(string p) {
    string answer = "";
    vector<char> u;
    vector<char> v;
    int u_left = 0;
    int u_right = 0;
    // u 에 r 과 l의 갯수가 같아지도록 문장의 처음부터 끝까지의 괄호를 추가.
    for(int i = 0; i< p.length(); i++){
        if(u_left != 0 && u_left == u_right){
            v.push_back(p[i]);
        }
        else{
            if(p[i] == '('){
                u_left ++;
                u.push_back(p[i]);
            }else{
                u_right ++;
                u.push_back(p[i]);
            }
        }
    }// 추가와 동시에 문자열이 올바른지 아닌지 파악
    if(u[0] == '('){
        //올바르면 answer에 삽입 후  v를 p로
        for(int i =0; i < u.size(); i++){
            answer+=u[i];
        }
        string q = "";
        for(int i = 0; i < v.size(); i++){
            q += v[i];
        }
        if(v.size() != 0){
            answer += solution(q);
        }
    }else{//올바르지 않을경우
        answer += '(';
        string q = "";
        for(int i = 0; i < v.size(); i++){
            q += v[i];
        }
        if(v.size() != 0){
            answer += solution(q);
        }answer += ')';
        for(int i = 1; i < u.size()-1; i++){
            if (u[i] == '('){
                answer += ')';
            }else{
                answer += '(';
            }
        }
    }
    return answer;
} 
int main(){
    string p ="()))((()";
    string answer = "";
    answer = solution(p);
    cout << answer;
}