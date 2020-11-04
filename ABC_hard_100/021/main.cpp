#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n) cin >> a[i];

    //最大のものを求める
    int mx = 0;
    rep(i, n) mx = max(mx, a[i]);

    //comb(a, b)のbを、小さいものに調整しなおしてある配列
    vector<int> b(n);
    b = a;
    rep(i, n) b[i] = min(b[i], mx - b[i]);

    //comb(a, b)のbの最大値を求める
    int val = 0;
    rep(i, n) val = max(val, b[i]);
    //最大値のインデックスを調べる
    int index = 0;
    rep(i, n) if(b[i] == val) index = i;

    //出力
    cout << mx << " " << a[index] << endl;
    return 0;
}