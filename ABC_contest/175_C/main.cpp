#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

ll func(ll num, ll X, ll D){
    X = fabs(X);
    ll mn_sub = pow(10, 16);
    ll near = num;
    for(int i = -1; i <= 1; i++){
        ll val = fabs(X - (num+i) * D);
        if(mn_sub > val){
            mn_sub = val;
            near = num + i;
        }
    }
    return near;
}

int main(){
    ll X, K, D;
    cin >> X >> K >> D;
    //おそらく一番近い値となるであろうと思われるDの加算/減算回数
    ll probably_near = fabs(X) / D;
    //一番近い値となることが確定したDの加算/減算回数
    ll near = func(probably_near, X, D);
    ll ans;
    if(near >= K){
        ans = fabs(fabs(X) - K * D);
    }else{
        ll sub = near - K;
        ans = fabs(fabs(X) - near * D);
        if(sub % 2 != 0){
            ans = min(fabs(ans + D), fabs(ans - D));
        }
    }
    cout << ans << endl;
    return 0;
}