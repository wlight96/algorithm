#include<bits/stdc++.h>
using namespace std;
string star;
int starnum = -1;
string fname;
int num;
int main(){
    cin >> num;
    cin >> star;
    for(int i=0; i<star.length(); i++){
        if(star[i]=='*'){
            starnum = i;
            break;
        }
    }
    int dane[num];
    for(int i=0; i<num; i++){
        cin >> fname;
        // * 이 0 번째, i번째, n-1번째일 경우를 나누어 생각한다. 
        for(int j=0; j< starnum; j++){
            if(fname[j] != star[j]){
                dane[i] = 1;
                cout << "f: "<< fname[j] << "s: "<< star[j]<<"\n";
                break;
            }
        }for(int j= star.length()-starnum; j<star.length(); j++){
            if(fname[(fname.length()-star.length())+j] != star[j]){
                dane[i] = 1;
                cout << "lf: "<< fname[(fname.length()-star.length())+j] << "ls: "<< star[j]<<"\n"; 
                break;
            }
        }
    }
    for(int i=0; i<num; i++){
        if(dane[i]!=0){
            cout<< "NE\n";
        }else{
            cout<< "DA\n";
        }
    }
}