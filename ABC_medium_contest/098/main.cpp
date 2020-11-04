#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(){
    ll N, P;
    cin >> N >> P;
    if(N == 1){
        cout << P << endl;
        return 0;
    }
    if(P == 1){
        cout << 1 << endl;
        return 0;
    }
    ll ans;
    for(int gcd = 1; gcd <= sqrt(P); gcd++){
        ll g_n = pow(gcd, N);
        if(P % g_n == 0) ans = gcd;
    }
    cout << ans << endl;
    return 0;
}