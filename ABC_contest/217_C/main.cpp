#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    int n; cin >> n;
    vector<int> ans(n);
    rep(i, n){
        int q; cin >> q;
        q--;
        ans[q] = i+1;
    }
    rep(i, n) cout << ans[i] << endl;
    return 0;
}