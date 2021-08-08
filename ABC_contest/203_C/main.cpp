#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for (int i = 0; i < n; i++)
const int lim = 1000000007;

int main()
{
    ll N, K;
    cin >> N >> K;
    // firstが町の番号、secondがその町でもらえるお金の合計
    map<ll, ll> mp;
    rep(i, N)
    {
        ll a, b;
        cin >> a >> b;
        mp[a] += b;
    }

    // 到達している町の番号を記録
    ll ans = 0;
    // その時点で所持しているお金を格納
    ll money = K;
    for (auto p : mp)
    {
        if (money - (p.first - ans) >= 0)
        {
            money += p.second;
        }
        else
        {
            ans += money;
            cout << ans << endl;
            return 0;
        }
    }
    // 最も遠い町の友達を尋ねることができた場合の最後の処理
    ans += money;
    cout << ans << endl;
    return 0;
}
