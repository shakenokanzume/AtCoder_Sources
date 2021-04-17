#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    int N;
    cin >> N;
    vector<ll> a(N);
    rep(i, N) cin >> a[i];

    // 解答を保存する変数 
    ll ans = 1 << 30;

    // ビット全探索
    // 配列を区切る棒(0~N本)を、隣り合う要素の間に入れるすべての場合を探索する
    rep(s, 1<<N-1){
        // 状態がsの時のXOR演算結果を格納
        ll now = 0;
        // 1つの区切りの中のOR演算結果を格納
        ll o = 0;
        // 配列を前からチェック
        rep(i, N){
            o |= a[i];
            // 区間が変わるときの処理
            if((s>>i)&1){
                now ^= o;
                o = 0;
            }
        }
        // 最後の区間では上記の区間が変わる際の処理が行われないため、ここでXORを計算する。
        now ^= o;
        ans = min(ans, now);
    }
    cout << ans << endl;
    return 0;
}