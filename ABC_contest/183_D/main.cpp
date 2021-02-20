#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    ll N, W;
    cin >> N >> W;

    // すべての時刻においての、使用するお湯の量の変化を格納する配列
    vector<ll> a(2*1e5+1, 0);
    rep(i, N){
        ll s, t, p;
        cin >> s >> t >> p;
        a[s] += p;
        a[t] -= p;
    }

    // すべての時刻においての、使用するお湯の量を格納する配列(累積和）
    // ただし、累積和のため、開始点がずれる
    vector<ll> sum(2*1e5+2, 0);
    rep(i, 1e5+1){
        sum[i+1] = sum[i] + a[i];
    }

    // 使用するお湯の量の最大値を求める
    ll mx = 0;
    rep(i, 1e5+2){
        if(mx < sum[i]) mx = sum[i];
    }
    
    // 条件判定
    if(mx > W) cout << "No" << endl;
    else cout << "Yes" << endl;
    return 0;
}