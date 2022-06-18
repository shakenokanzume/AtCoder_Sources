#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

ll gcd(ll a, ll b){
    if(b == 0) return a;
    else return gcd(b, a%b);
}

ll func(ll top, ll n, ll tail){
    ll val = (n*(top + tail)) / 2;
    return val;
}

int main(){
    ll n, a, b; cin >> n >> a >> b;
    ll all_sum = func(1, n, n);
    ll remove_a = func(a, n/a, (n/a) * a);
    ll remove_b = func(b, n/b, (n/b) * b);

    // a, bの最小公倍数lcmを求める
    ll g = gcd(a, b);
    ll lcm = (a * b) / g;
    ll remove_ab = func(lcm, n/lcm, (n/lcm) * lcm);

    ll ans = all_sum - remove_a - remove_b + remove_ab;
    cout << ans << endl;
    return 0;
}