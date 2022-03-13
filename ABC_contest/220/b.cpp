#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

ll func(string S, ll K){
    int N = (int)S.size();
    ll val = 0;
    reverse(S.begin(), S.end());
    rep(i, N){
        val += (S[i] - '0') * pow(K, i);
    }
    return val;
}
int main(){
    ll K;
    string A, B;
    cin >> K >> A >> B;
    ll ans = func(A, K) * func(B, K);
    cout << ans << endl;
    return 0;
}