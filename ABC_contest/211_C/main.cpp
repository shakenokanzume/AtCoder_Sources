#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    string s;
    cin >> s;
    int N = s.size();
    // dpの伴兵枠を設定するため、行・列共に1つ大きな値で作っておく
    vector<vector<int>> dp(N+1, vector<int>(9, 0));
    // dpの伴兵枠の初期化
    rep(i, N+1) dp[i][0] = 1;

    string t = "chokudai";
    // dpにおいて現在見ている位置は、dp[i+1][j+1]で参照する
    rep(i, N){
        rep(j, 8){
            if(s[i] != t[j]){
                // 与えられた文字列のi文字目が、文字列tのj文字目と一致していなければ、dp[i][j+1]と同じ値を代入
                dp[i+1][j+1] = dp[i][j+1];
            }else{
                // 与えられた文字列のi文字目が、文字列tのj文字目と一致していれば、与えられた文字列のi文字目までで作れる、文字列tのj文字目までの部分
                // の個数は、dp[i][j+1]に加えて、与えられた文字列i-1文字目までで作れる、文字列tのj-1文字目までの部分の数だけ増える
                dp[i+1][j+1] = (dp[i][j+1] + dp[i][j]) % lim;
            }
        }
    }
    cout << dp[N][8] << endl;
    return 0;
}