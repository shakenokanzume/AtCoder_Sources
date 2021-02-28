#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int mx_num(string s){
    sort(s.begin(), s.end(), greater<char>());
    int ref = int(s[0] - '0');
    return ref;
}

// 文字列sをn進法表記とみなして得られる値を返す関数
ll func(string s, ll n){
    reverse(s.begin(), s.end());
    ll ref = 0;
    int N = (int)s.size();
    rep(i, N){
        ll val = ll(s[i] - '0');
        ref += val * pow(n, i);
    }
    return ref;
}

int main(){
    string x;
    ll M;
    cin >> x >> M;

    // xに含まれる最も大きい数字dを求める
    int d = mx_num(x);

    ll ans = 0;

    for(ll n = d+1; ; n++){
        if(func(x, n) <= M) ans++;
        else break;
    }
    cout << ans << endl;
    return 0;
}