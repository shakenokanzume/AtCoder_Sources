#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(){
    int N, K;
    cin >> N >> K;
    vector<int> p(N);
    rep(i, N) cin >> p[i];
    sort(p.begin(), p.end());
    int ans = 0;
    rep(i, K) ans += p[i];
    cout << ans << endl;
    return 0;
}