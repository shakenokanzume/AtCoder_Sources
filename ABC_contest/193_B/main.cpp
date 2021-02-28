#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    int N;
    cin >> N;
    int mn = 1000000001;

    rep(i, N){
        int a, p, x;
        cin >> a >> p >> x;
        if(a + 1 <= x){
            mn = min(mn, p);
        }
    }
    if(mn == 1000000001) cout << -1 << endl;
    else cout << mn << endl;
    return 0;
}