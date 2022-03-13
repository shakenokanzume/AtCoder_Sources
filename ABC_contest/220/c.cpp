#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    int N;
    cin >> N;
    ll X;
    vector<ll> a(N);
    vector<ll> sum(N+1, 0);
    rep(i, N) cin >> a[i];
    cin >> X;
    for(int i = 1; i <= N; i++) sum[i] = sum[i-1] + a[i-1];
    ll all_sum = sum[N];

    ll k = (X / all_sum) * N;
    ll sub = (X / all_sum) * all_sum;
    rep(i, N+1){
        ll val = sub + sum[i];
        ll ans = k + i;
        if(val > X){
            cout << ans << endl;
            return 0;
        }
    }
    return 0;
}