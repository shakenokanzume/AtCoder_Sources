#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)
#define repp(i, n) for(int i = 1; i < n; i++)
const int lim = 1000000007;

using mint = modint998244353;

int main(){
    ll n;
    cin >> n;
    mint ans;

    for(ll i = 1; i <= n; i*=10){
        ll j = 10 * i;
        // [i, j)の範囲で数を数える
        // min(n+1, j)は、n+1の時は、f(N)が数えられている番で、[i, j]となるため、+1している。
        // jのときは、桁の境目(9, 99, 999など)
        ll len = min(n+1, j) - i;
        ans += (mint(len + 1) * len / 2);
    }
    cout << ans.val() << endl;
    return 0;
}