#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;
const int mod = 998244353;

vector<vector<int>> dp(1000005, vector<int>(10, 0));

// modを考慮した和
int add_mod(int x, int y){
    return (x+y) % mod;
}

int main(){
    int n; cin >> n;
    // １桁目のところの初期化
    for(int d = 1; d <= 9; d++) dp[1][d] = 1;
    // dpの更新は２桁目以降で行う
    for(int i = 2; i <= n; i++){
        for(int d = 1; d <= 9; d++){
            if(d-1 >= 1) dp[i][d] = add_mod(dp[i][d], dp[i-1][d-1]);
            dp[i][d] = add_mod(dp[i][d], dp[i-1][d]);
            if(d+1 <= 9) dp[i][d] = add_mod(dp[i][d], dp[i-1][d+1]);
        }
    }
    // n桁に該当する部分のdp[i][d]の値を可算する
    int ans = 0;
    for(int d = 1; d <= 9; d++) ans = add_mod(ans, dp[n][d]);
    cout << ans << endl;
    return 0;
}