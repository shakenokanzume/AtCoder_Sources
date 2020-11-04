#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(){
    string S;
    cin >> S;
    int N = (int)S.size();
    vector<int> count(N, 0);
    //Rの個数についての探索（左側からの探索）
    rep(i, N){
        if(S[i] == 'R'){
            int R_cnt = 0;
            while(S[i+1] != 'L'){
                R_cnt++;
                i++;
            }
            //RLの組から左側を見たときの、連続するRの数を数え、それを計算してRLの組のマスに加算する
            count[i] += (R_cnt/2);
            count[i+1] += (R_cnt + 2 - 1)/2;
            //もともとRLの組が置かれているマスには、必ずもともといた子供が戻ってくるため、1人分たす
            count[i]++;
            count[i+1]++;
        }
    }
    //Lの個数についての探索（右側からの探索）
    for(int i = N-1; i >= 0; i--){
        if(S[i] == 'L'){
            int L_cnt = 0;
            while(S[i-1] != 'R'){
                L_cnt++;
                i--;
            }
            //RLの組から右側を見た時の、連続するLの数を数え、それを計算してRLの組のマスに加算する
            count[i] += (L_cnt/2);
            count[i-1] += (L_cnt + 2 - 1)/2;
            //Rの探索の方で、もともとRLの組にいた子ども分の加算は済んでいるので、こちらでは行わない。
        }
    }
    rep(i, N) cout << count[i] << endl;
    return 0;
}