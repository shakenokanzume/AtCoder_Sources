#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

// ((2N/L)-L+1)/2 が整数である場合は、1を返し、そうでない場合は0を返す関数
int func(ll N, ll L){
    ll val = 2*N/L - L + 1;
    // valが負の数になる場合があるため、絶対値を付ける
    if(abs(val) % 2 == 0) return 1;
    else return 0;
}

int main(){
    ll N;
    cin >> N;
    // 2Nの約数の個数
    ll ans = 0;
    // 2Nの約数を数える
    for(ll x = 1; x*x <= 2*N; x++){
        if((2*N) % x == 0){
            // x * y == 2N のyを定義
            ll y = (2*N) / x;
            // x, yに対して、それぞれfuncで条件を満たすかチェックを行う
            ans += func(N, x);
            if(x != y) ans += func(N, y);
        }
    }
    cout << ans << endl;
    return 0;
}