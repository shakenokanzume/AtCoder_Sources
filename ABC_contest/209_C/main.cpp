#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    int N;
    cin >> N;
    vector<int> c(N);
    rep(i, N) cin >> c[i];

    ll ans = 1;

    sort(c.begin(), c.end());

    rep(i, N){
        ans = (ans * (c[i] - i)) % lim;
    }
    cout << ans << endl;
    return 0;
}