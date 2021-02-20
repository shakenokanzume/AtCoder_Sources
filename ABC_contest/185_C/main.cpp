#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

// コンビネーション（組み合わせ）を求める関数
// 64bit整数型を超過しないように工夫
ll comb(ll m, ll n){
    ll ref = 1;
    for(int i = 1; i <= n; i++){
        ref = (ref * (m-(i-1))) / i;
    }
    return ref;
}

int main(){
    ll L;
    cin >> L;

    ll ans = comb(L-1, 11);
    cout << ans << endl;
    return 0;
}