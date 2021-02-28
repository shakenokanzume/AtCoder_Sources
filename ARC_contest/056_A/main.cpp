#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    ll A, B, K, L;
    cin >> A >> B >> K >> L;

    ll ans = 0;

    if(A*L <= B){
        ans = K * A;
    }else{
        if((K%L)*A <= B){
            ans = (K/L)*B + (K%L)*A;
        }else{
            ans = (K/L)*B + B;
        }
    }
    cout << ans << endl;
    return 0;
}