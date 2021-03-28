#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    int N;
    cin >> N;
    double x0, y0;
    cin >> x0 >> y0;
    double xh, yh;
    cin >> xh >> yh;

    // 回転角度を求める
    double deg = (double)360 / N;
    double rad = deg * M_PI / 180;

    // 中心座標を求める
    double x, y;
    x = (x0 + xh) / 2;
    y = (y0 + yh) / 2;

    // 座標を原点中心にする
    double n_x0 = x0 - x;
    double n_y0 = y0 - y;

    // 求める座標
    double X = n_x0 * cos(rad) - n_y0 * sin(rad);
    double Y = n_x0 * sin(rad) + n_y0 * cos(rad);

    X += x;
    Y += y;

    printf("%.10lf\n", X);
    printf("%.10lf\n", Y);

    return 0;
}