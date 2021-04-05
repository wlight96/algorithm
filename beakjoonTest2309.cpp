#include <bits/stdc++.h>
using namespace std;
int draves[9];
int ed[2];
int sum;
int main() {
	for(int i=0; i<9; i++){
		cin>> draves[i];
		sum += draves[i];
	}
	sort(draves,draves+9);
	for(int i=0; i<9; i++){
		for(int j = i+1; j<9; j++){
			if(sum - draves[i] - draves[j]==100){
				ed[0] = draves[i];
				ed[1] = draves[j];
			}
		}
	}
	for(int i = 0; i<9; i++){
        if(draves[i]!=ed[0] && draves[i]!=ed[1]){
            cout<<draves[i]<<"\n";
        }
	}
	return 0;
}