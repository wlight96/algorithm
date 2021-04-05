#include<bits/stdc++.h>
using namespace std;

string input;
int abc[26];

int main(){
    cin >> input;
    for(int i =0; i<input.length(); i++){
        abc[input[i]-'a'] += 1;
    }
    for(int i=0; i<26; i++){
        cout<< abc[i]<< " ";
    }cout << "\n";
}
