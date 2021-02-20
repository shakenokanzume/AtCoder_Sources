#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(){
    ll N;
    cin >> N;
    // x[i]まで見た時の、y[i+1]がtrueになる場合の数をdp[1]に
    // x[i]まで見た時の、y[i+1]がfalseになる場合の数をdp[0]に格納していく
    // 初期状態では、dp[0] = dp[1] = 1 である
    vector<ll> dp(2, 1);

    // 遷移開始
    rep(i, N){
        string s;
        cin >> s;
        // 古いdpテーブルの定義
        vector<ll> p(2, 0);
        // 古いdpテーブルと新しいdpテーブルのスワップ
        swap(dp, p);

        // y[i-1]がtrueかfalseかでループ
        rep(y, 2){
            // x[i]がtrueかfalseかでループ
            rep(x, 2){
                int next_y;
                if(s == "AND") next_y = y & x;
                else next_y = y | x;
                dp[next_y] += p[y];
            }
        }
    }
    cout << dp[1] << endl;
    return 0;
}