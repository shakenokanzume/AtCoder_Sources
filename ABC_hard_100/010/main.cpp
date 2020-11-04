#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(){
    int N;
    ll K;
    cin >> N >> K;
    vector<int> a(N);
    rep(i, N) cin >> a[i];
    vector<ll> sum(N+1, 0);
    for(int i = 1; i < N+1; i++){
        sum[i] = sum[i-1] + a[i-1];
    }

    ll ans = 0;
    rep(i, N){
        int s = sum.end() - lower_bound(sum.begin(), sum.end(), K + sum[i]);
        ans += s;
    }
    cout << ans << endl;
    return 0;
}