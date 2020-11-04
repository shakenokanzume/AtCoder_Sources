#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

//aのb乗を求める関数
ll func(ll a, ll b){
    ll val = 1;
    rep(i, b){
        val = (val * a) % lim;
    }
    return val;
}

int main(){
    ll N;
    cin >> N;

    //べん図から、包除原理を用いて条件を満たす場合の式を出した。
    ll ans = (func(10, N) - func(9, N) - func(9, N) + func(8, N));
    ans %= lim;
    //包除原理の式の中に減算が含まれるため、modの値を足した後にmodの値で剰余を求める
    ans = (ans + lim) % lim;
    cout << ans << endl;
    return 0;
}