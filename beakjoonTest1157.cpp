#include<bits/stdc++.h>
using namespace std;

int main(){
    string sen;
    int az[26]={0,};
    cin >> sen;
    for(int i =0; i<sen.size(); i++){
        sen[i] = toupper(sen[i]);
        az[sen[i]-65] += 1;
    }
    int max = 1;
    int count = 0;
    for(int i = 0; i<26; i++){
        if(max < az[i]){
            max  = az[i];
        }
    }
    for(int i =0; i<26; i++){
        if(az[i]==max){
            count +=1;
        }if(count >1){
            cout<<"?";
            break;
        }
    }if (count ==1){
        for(int i=0; i<26;i++){
            if(az[i] == max){
                printf("%c\n",'A'+i);
            }
        }
    }   
}