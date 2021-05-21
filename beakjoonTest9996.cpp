#include<bits/stdc++.h>
using namespace std;
string star;
int startsize = -1;
int endsize = -1;
string fname;
int num;
int main(){
    cin >> num;
    cin >> star;
    string rstar(star);
    reverse(rstar.begin(),rstar.end());
    for(int i=0; i<star.length(); i++){
        if(star[i]=='*'){
            startsize = i;
        }else if(rstar[i] =='*'){
            endsize = i;
        }
    }

    int dane[num];
    for(int i=0; i<num; i++){
        cin >> fname;
        dane[i] = 0;
        for(int j=0; j< startsize; j++){
            if(fname[j] != star[j]){
                dane[i] = 1;
                break;
            }
        }
        reverse(fname.begin(), fname.end());
        for(int j = 0; j< endsize; j++){
            if(fname[j] != rstar[j]){
                dane[i] = 1;
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