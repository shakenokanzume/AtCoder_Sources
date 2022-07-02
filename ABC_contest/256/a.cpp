#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    ll N;
    cin >> N;
    ll ans = 1;
    rep(i, N){
        ans *= 2;
    }
    cout << ans << endl;
    return 0;
}