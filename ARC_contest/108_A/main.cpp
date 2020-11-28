#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

// N*M = PとなるN, Mの組を出す関数
vector<pair<ll, ll>> func(ll num){
    vector<pair<ll, ll>> p;
    for(ll i = 1; i * i <= num; i++){
        // Pを割り切れる値が現れた時、その割る数と、商を格納(これがN, Mとなる)
        if(num % i == 0){
            ll a = i;
            ll b = num / i;
            p.emplace_back(a, b);
        }
    }
    return p;
}

int main(){
    ll S, P;
    cin >> S >> P;
    vector<pair<ll, ll>> pi;
    // N*M = Pを満たすN, Mのすべての組をpiに格納（ただし、N, Mの入れ替わりは含まれていない）
    pi = func(P);
    for(auto v : pi){
        if(v.first + v.second == S){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}