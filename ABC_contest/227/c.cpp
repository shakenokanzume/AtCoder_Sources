#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)
#define repp(i, n) for(int i = 1; i < n; i++)
const int lim = 1000000007;

int main(){
    ll N;
    cin >> N;
    int64_t ans = 0;
    for(ll a = 1; a*a*a <= N; a++){
        for(ll b = a; a*b*b <= N; b++){
            ans += (N/(a*b) - b + 1);
        }
    }
    cout << ans << endl;
    return 0;
}