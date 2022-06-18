#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    int n; cin >> n;
    map<int, vector<int>> mp;
    rep(i, n){
        int a; cin >> a;
        mp[a].push_back(i+1);
    }
    for(auto m : mp) sort(m.second.begin(), m.second.end());
    int q; cin >> q;
    rep(i, q){
        int l, r, x; cin >> l >> r >> x;
        int cnt = int(upper_bound(mp[x].begin(), mp[x].end(), r) - lower_bound(mp[x].begin(), mp[x].end(), l));
        cout << cnt << endl;
    }
    return 0;
}