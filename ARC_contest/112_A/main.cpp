#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

ll func(ll l, ll r){
    if(2 * l > r) return 0;
    else{
        return (r - 2*l + 1) * (r - 2*l +2) / 2;
    }
}

int main(){
    int T;
    cin >> T;
    vector<pair<ll, ll>> p(T);
    rep(i, T){
        ll l, r;
        cin >> l >> r;
        p[i].first = l;
        p[i].second = r;
    }

    // 各ケースに対する組の個数を求める
    // A = B + C を満たす(B, C)の組の個数を求める
    rep(i, T){
        cout << func(p[i].first, p[i].second) << endl;
    }
    return 0;
}