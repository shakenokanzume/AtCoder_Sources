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

    // a[i]を200で割ったあまりがk（0 <= k < 200の整数）であるような者の個数を格納
    vector<ll> cnt(200, 0);
    rep(i, N) cnt[a[i] % 200]++;

    ll ans = 0;

    // 200で割ったあまりがkになるようなものがM個あるとして、M個の中から2つを選び取る選び方の和をとる
    for(ll p : cnt){
        ans += (p * (p-1)) / 2;
    }
    cout << ans << endl;
    return 0;
}