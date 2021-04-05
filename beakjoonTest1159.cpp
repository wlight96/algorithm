#include<bits/stdc++.h>
using namespace std;
int abc[26];
char ch;
int giveup = 0;
string lname;
int num;
int main(){
    cin>> num;
    for(int i=0; i<num; i++){
        cin >> lname; 
        abc[lname[0] - 'a'] +=1;
    }
    for(int i=0; i<26; i++){
        if(abc[i]>4){
           printf("%c", 'a' + i);
           giveup = 5; 
        }
    }
    if(giveup!=5){
        cout << "PREDAJA";
    }
}