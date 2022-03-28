#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int n, k;

bool func(int r, int v){
    if(abs(v - r) <= k) return true;
    else return false;
}

int main(){
    cin >> n >> k;
    vector<vector<int>> a(2, vector<int>(n));
    rep(i, 2) rep(j, n) cin >> a[i][j];
    // dp配列の準備
    vector<vector<bool>> dp(n, vector<bool>(2, false));
    dp[0][0] = true; dp[0][1] = true;
    // 更新
    for(int i = 1; i < n; i++){
        int pi = i - 1;
        rep(j, 2){
            // dp[i][j] = ?を更新
            rep(pj, 2){
                if(!dp[pi][pj]) continue;
                if(abs(a[j][i] - a[pj][pi]) > k) continue;
                dp[i][j] = true;
            }
        }
    }

    // dp[n-1][0/1]のどちらかにtrueがあれば成功
    rep(i, 2){
        if(dp[n-1][i]){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}