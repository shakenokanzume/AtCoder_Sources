#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    int n, q; cin >> n >> q;
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    sort(a.begin(), a.end());
    vector<int> ans;
    rep(j, q){
        int x; cin >> x;
        int val = a.end() - lower_bound(a.begin(), a.end(), x);
        ans.push_back(val);
    }
    rep(i, q) cout << ans[i] << endl;
    return 0;
}