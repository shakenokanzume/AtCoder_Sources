#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    int N, W;
    cin >> N >> W;
    vector<int> a(N);
    rep(i, N) cin >> a[i];

    // dp配列の定義
    vector<vector<bool>> dp(N+1, vector<bool>(W + 1, false));
    // 0は、0個の整数で作れる
    dp[0][0] = true;

    rep(i, N){
        rep(j, W + 1){
            if(dp[i][j]){
                // a[i]を和に加えない場合
                dp[i+1][j] = true;
                // a[i]を和に加える場合
                if(j + a[i] <= W){
                    dp[i + 1][j + a[i]] = true;
                }
            }
        }
    }

    // 出力部分
    // N個以下の整数の和を取って、Wを作ることが可能かどうか
    if(dp[N][W]) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}