#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    ll a, b, k; cin >> a >> b >> k;
    rep(i, 50){
        if(a >= b){
            cout << i << endl;
            return 0;
        }
        a *= k;
    }
}