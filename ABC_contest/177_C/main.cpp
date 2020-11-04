#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(){
    //modの定義
    int limit = pow(10, 9) + 7;
    int N;
    cin >> N;
    vector<ll> a(N);
    rep(i, N) cin >> a[i];

    //累積和を求めておく
    vector<ll> sum(N+1, 0);
    for(int i = 1; i < N+1; i++) sum[i] = sum[i-1] + a[i-1];

    //求める答え
    ll ans = 0;
    rep(i, N-1){
        //i項目以降の和と、a[i]をかけたもののmodを撮って、ansに加える
        ans = (ans + (((sum[N] - sum[i+1]) % limit) * a[i]) % limit) % limit;
    }
    cout << ans << endl;
    return 0;
}