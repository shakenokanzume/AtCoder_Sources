#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    ll N;
    cin >> N;
    ll val;
    for(ll k = 0;;k++){
        if(k == 0) val = 1;
        else val *= 2;
        if(val > N){
            cout << --k << endl;
            return 0;
        }
    }
}