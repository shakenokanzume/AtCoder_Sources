#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    int N, X;
    cin >> N >> X;
    vector<int> a(N);
    rep(i, N) cin >> a[i];

    int ans = 0;
    rep(i, N){
        if((X >> i) & 1) ans += a[i];
    }
    cout << ans << endl;
    return 0;
}