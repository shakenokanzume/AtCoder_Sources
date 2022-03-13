#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    int a, b;
    cin >> a >> b;
    ll ans = 1;
    for(int i = b; i < a; i++){
        ans *= 32;
    }
    cout << ans << endl;
    return 0;
}