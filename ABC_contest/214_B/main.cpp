#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)
const int lim = 1000000007;

int main(){
    int s, t;
    cin >> s >> t;
    int ans = 0;
    rep(i, s+1){
        rep(j, s+1){
            rep(k, s+1){
                int sum = i + j + k;
                int mat = i * j * k;
                if(sum <= s && mat <= t) ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}