#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    int N, X; cin >> N >> X;
    vector<vector<bool>> dp(N+1, vector<bool>(10000+1, false));
    // 最初は座標0にいるため、0行目は0列の値のみtrue
    dp[0][0] = true;

    rep(i, N){
        int a, b; cin >> a >> b;
        rep(j, 10000+1){
            if(dp[i][j]){
                dp[i+1][j+a] = true;
                dp[i+1][j+b] = true;
            }
        }
    }
    if(dp[N][X]) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}