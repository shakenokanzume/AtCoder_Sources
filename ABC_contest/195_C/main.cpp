#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int keta(ll num){
    int cnt = 1;
    while(num / 10 != 0){
        cnt++;
        num /= 10;
    }
    return cnt;
}

ll pow_o(ll a, ll b){
    if(b == 0) return 1;
    ll ref = 1;
    rep(i, b){
        ref *= a;
    }
    return ref;
}

int main(){
    ll N;
    cin >> N;

    ll ans = 0;

    if(N < 1000){
        cout << 0 << endl;
        return 0;
    }
    int k = keta(N);

    // jは10の何乗の桁かを表す。（桁数の1つ小さい数字となる）
    int j = k - 1;
    while(N >= 1000){
        // その桁数での数字の個数
        ll val = N - pow_o(10, j) + 1;
        ans += val * (j / 3);
        N = pow_o(10, j) - 1;
        j--;
    }
    cout << ans << endl;
    return 0;

}