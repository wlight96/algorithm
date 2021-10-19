#include<bits/stdc++.h>
using namespace std;
int min = 99999;
int num = 21;
int arr[20][20] = {0,};
int comb(int cur, int df, int link[]){
    int sum_link;
    int sum_start;
    for(int i = cur+1; i <num - (num/2 - (df +2)); i++){
        // min 배열에 수 저장 완료
        if (df == num/2){
            link[df] = i;
            vector<int> start;
            for(int j = 0; j<num; j++){
                if(find(link, link + 4, j)==link+4){
                    start.push_back(j);
                }
            }for(int k = 0; k< num/2; k++){
                for(int l=0; l<num/2; l++){
                    sum_link += arr[link[k]][link[l]];
                    sum_start += arr[start[k]][start[l]];
                }
            }
            if(abs(sum_link - sum_start)<min){
                min = abs(sum_link - sum_start);
                return min;
            }else{
                return min;
            }
        }else{
            link[df] = i;
            comb(i,df+1,link);
        }
    }
}

int main(){
    int num = 0;

    int ans = 0;
    cin>> num;
    int pick[num/2];
    for(int i = 0; i< num; i++){
        for(int j = 0; j < num; j++){
            cin>> arr[i][j];
        }
    }

    // num C num/2 개의 팀 구성 생김
    // 이중 팀 
    for(int i =1; i<num-(num/2-1);i++){
         int link[num/2];
         link[0] = 1;
         link[1] = i;
         ans = comb(i,2,link);
    }cout << ans;
}