#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;
const int mod = 998244353;

int main(){
    int n, m, k; cin >> n >> m >> k;
    vector<vector<int>> dp(n+1, vector<int>(k+1, 0));
    // dpの初期値設定
    dp[0][0] = 1;
    for(int i = 1; i <= n; i++){
        for(int j = 0; j <= k; j++){
            // 各マス[i][j]に対して、[i-1][..., j-1]からの和を格納する
            int now = 0;
            for(int l = 1; l <= m; l++){
                // j-lが－になる場合はスキップ
                if(j-l >= 0){
                    now += dp[i - 1][j - l];
                    // 割った余りを取る操作
                    now %= mod;
                }
            }
            dp[i][j] = now;
        }
    }
    int ans = 0;
    for(int j = 0; j <= k; j++){
        ans += dp[n][j];
        ans %= mod;
    }
    cout << ans << endl;
    return 0;
}