#include <bits/stdc++.h>
using namespace std;
string p;
int tf = 1;
int main() {
	cin>> p;
	for(int i =0; i<(p.length())/2; i++){
		if(p[i]==p[(p.length()-1)-i]){
			tf = 1;
		}else{
			tf = 0;
			break;
		}
	}
	cout << tf<< "\n";
	return 0;
}