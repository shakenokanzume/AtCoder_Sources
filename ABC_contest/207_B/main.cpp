#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    ll A, B, C, D;
    cin >> A >> B >> C >> D;
    if(C*D-B <= 0){
        cout << -1 << endl;
        return 0;
    }
    ll n = (A + (C*D-B) - 1) / (C*D-B);
    cout << n << endl;
    return 0;
}