#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;


int main(){
    int n, k, x; cin >> n >> k >> x;
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    sort(a.begin(), a.end(), greater<int>());

    rep(i, n){
        // a[i]に対して、値段が0より小さくならないようにクーポンを使用できる最大値(整数)
        int cnt = a[i] / x;
        // 最大値が、全体で使用可能なクーポン枚数を超えていないかチェック
        if(cnt > k){
            a[i] -= k * x;
            k -= cnt;
            // クーポンを使い切るようなら、支払いフェイズへ
            break;
        }else{
            a[i] -= cnt * x;
            k -= cnt;
        }
    }

    // すべてのa[i]に対して処理を行っても、使用可能なクーポンが残っている場合
    sort(a.begin(), a.end(), greater<int>());
    rep(i, n){
        if(k > 0){
            a[i] = 0;
            k--;
        }else{
            break;
        }
    }

    // 支払いフェイズ
    ll ans = 0;
    rep(i, n) ans += (ll)a[i];
    cout << ans << endl;
    return 0;
}