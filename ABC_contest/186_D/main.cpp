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
    // 順番変えても問題ないためソート
    sort(a.begin(), a.end());

    // i番目までの和を保持する変数
    ll s = 0;

    ll ans = 0;
    for(int i = 0; i < N; i++){
        ans += (i * a[i]);
        ans -= s;
        s += a[i];
    }
    cout << ans << endl;
    return 0;
}