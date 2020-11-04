#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(){
    int N;
    cin >> N;
    vector<int> a(N);
    rep(i, N) cin >> a[i];
    ll ans = 0;
    for(int i = 1; i < N; i++){
        if(a[i] >= a[i-1])continue;
        ans += a[i-1] - a[i];
        a[i] = a[i-1];
    }
    cout << ans << endl;
    return 0;
}