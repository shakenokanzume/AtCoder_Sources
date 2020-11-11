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
    vector<ll> sum(N+1, 0);
    for(int i = 1; i < N+1; i++){
        sum[i] = sum[i-1] + a[i-1];
    }
    vector<ll> max_point(N);
    ll mx = 0;
    ll val = 0;
    rep(i, N){
        val += a[i];
        if(val > mx){
            mx = val;
        }
        max_point[i] = mx;
    }

    //ロボットの座標の最大値を格納
    ll ans = 0;
    //ある時点でのロボットの座標を格納
    ll pos = 0;
    for(int i = 1; i < N+1; i++){
        if(ans < pos + max_point[i-1]){
            ans = pos + max_point[i-1];
        }
        pos += sum[i];
    }
    cout << ans << endl;
    return 0;
}