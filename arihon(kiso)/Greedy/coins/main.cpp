#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    int N, M;
    cin >> N >> M;
    vector<int> c(M);
    rep(i, M) cin >> c[i];

    // dp[i] : i円を支払うために必要なコインの最小枚数
    // Nの範囲は1<=N<=50000より、要素数を指定
    vector<int> dp(50001, 0);
    // 1円以上の場合には、十分大きな値を初期値として入力
    for(int i = 1; i <= N+1; i++){
        dp[i] = 1000000;
    }

    // dp開始
    // 0円~N円までで、i円を支払う場合
    rep(i, N+1){
        // c[j]円を追加して、表現できる金額のdpを書き換える
        rep(j, M){
            if(i + c[j] <= N){
                // もともと代入されていた値と、i円からc[j]円たした時(d[i] + 1)との、最小値をとる
                dp[i+c[j]] = min(dp[i+c[j]], dp[i] + 1);
            }
        }
    }
    cout << dp[N] << endl;
    return 0;
}