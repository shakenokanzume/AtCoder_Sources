#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(){
    ll N, C;
    cin >> N >> C;
    // firstに増減のタイミング（a or b)を、secondに増減量cを入れる
    vector<pair<ll, ll>> pr;
    rep(i, N){
        ll a, b, c;
        cin >> a >> b >> c;
        // 金額発生のタイミングをずらしている
        pair<ll, ll> up = make_pair(a-1, c);
        pair<ll, ll> down = make_pair(b, -c);

        pr.push_back(up);
        pr.push_back(down);
    }
    // pairのfirstで降順ソート
    sort(pr.begin(), pr.end(), [](auto const& l, auto const& r){
        return l.first < r.first;
    });
    // 前回金額変動が発生したタイミングをtに格納する
    ll t = 0;
    // 解を格納する変数
    ll ans = 0;
    // C円のプランで払わない場合の、ある区間における支払い料金を格納
    ll fee = 0;
    // ループ処理開始
    for(auto p : pr){
        ll x = p.first;
        ll y = p.second;
        // 料金変動のタイミングに重複がないとき
        if(x != t){
            ans += min(C, fee) * (x - t);
            t = x;
        }
        // 料金変動の金額をfeeに反映
        // こちらは、料金変動のタイミングが重複した場合にも実行される（feeへの料金変動の上乗せ）
        fee += y;
    }
    cout << ans << endl;
    return 0;
}