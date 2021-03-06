#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(){
    int N;
    cin >> N;
    vector<ll> a(N);
    rep(i, N) cin >> a[i];
    vector<ll> sum(N+1, 0);
    rep(i, N) sum[i+1] = sum[i] + a[i];

    ll ans = 0;
    ll d_ans = 0;
    rep(i, N){
        d_ans += a[i] * a[i];
        ans += a[i] * a[i] * (i+1);
        ans += d_ans;
        ans -= 2 * a[i] * sum[i+1];
    }
    cout << ans << endl;
    return 0;
}