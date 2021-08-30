#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    int N;
    cin >> N;
    vector<int> a(N);
    rep(i, N) cin >> a[i];

    ll ans = 0;
    sort(a.begin(), a.end(), greater<int>());
    int t = N-1;
    rep(i, N){
        int lim = 2;
        if(i == 0) lim = 1;
        rep(j, lim){
            if(t > 0){
                ans += (ll)a[i];
                t--;
            }
        }
    }
    cout << ans << endl;
    return 0;
}