#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for (int i = 0; i < n; i++)

const int lim = 1000000007;

double X, Y, R;

// あるxに対する円周上の点のy座標を出す関数
//
pair<double, double> func(ll num)
{
    double x = (double)num;
    // 定数項
    double val = x * x - 2 * X * x + X * X + Y * Y - R * R;

    double ref1, ref2;
    // 誤差対応した解の公式を用いる
    if (Y > 0)
    {
        ref1 = Y + sqrt(Y * Y - val);
        ref2 = val / ref1;
    }
    else if (Y < 0)
    {
        ref2 = -1 * (fabs(Y) + sqrt(Y * Y - val));
        ref1 = val / ref2;
    }
    else
    {
        ref1 = sqrt(-val);
        ref2 = -1 * sqrt(-val);
    }

    pair<double, double> ans = make_pair(ref1, ref2);
    return ans;
}
int main()
{
    cin >> X >> Y >> R;
    // 探査範囲の最も小さなx（整数）を求める
    ll head_x = (ll)ceil(X - R);
    // 探索範囲の最も大きなx（整数）をもとめる
    ll tail_x = (ll)floor(X + R);
    // 格子点の個数を格納
    ll ans = 0;

    // 範囲内のxについてループ
    for (ll x = head_x; x <= tail_x; x++)
    {
        pair<double, double> pos_y = func(x);
        ll up_y = (ll)floor(pos_y.first);
        ll dw_y = (ll)ceil(pos_y.second);
        ans += (up_y - dw_y + 1);
    }
    cout << ans << endl;
    return 0;
}