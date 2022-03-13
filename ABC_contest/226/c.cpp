#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)
#define repp(i, n) for(int i = 1; i < n; i++)
const int lim = 1000000007;

int main(){
    int N;
    cin >> N;
    vector<ll> t(N);
    vector<vector<int>> a(N);
    rep(i, N){
        int k;
        cin >> t[i] >> k;
        rep(j, k){
            int A;
            cin >> A;
            A--;
            a[i].push_back(A);
        }
    }
    vector<bool> need(N);
    need[N-1] = true;
    for(int i = N-1; i >= 0; i--){
        if(need[i]){
            for(auto j : a[i]){
                need[j] = true;
            }
        }
    }
    ll ans = 0;
    rep(i, N){
        if(need[i]) ans += t[i];
    }
    cout << ans << endl;
    return 0;
}