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
        // * �� 0 ��°, i��°, n-1��°�� ��츦 ������ �����Ѵ�. 
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