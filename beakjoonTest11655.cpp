#include <bits/stdc++.h>
using namespace std;
string input;
int main(){
    getline(cin, input);
    for(int i=0; i<input.length(); i++){
        if('a'<= input[i] && input[i]<= 'z'){
            if((input[i]+13) > 'z'){
                printf("%c",(input[i]-13));
            }else{
                printf("%c",input[i]+13);
            }
        }else if('A'<=input[i] && input[i]<='Z'){
            if((input[i]+13) > 'Z'){
                printf("%c",(input[i]-13));
            }else{
                printf("%c",input[i]+13);
            }
        }else{
            printf("%c",input[i]);
        }
    }cout << '\n' << input;
}