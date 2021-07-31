#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)
const int lim = 1000000007;

int main(){
    ll N;
    cin >> N;
    map<int, ll> mp;
    rep(i, N){
        int a;
        cin >> a;
        mp[a]++;
    }

    ll all = N * (N-1) / 2;
    for(auto p : mp){
        ll sub = p.second * (p.second-1) / 2;
        all -= sub;
    }
    cout << all << endl;
    return 0;
}