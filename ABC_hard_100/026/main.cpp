#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(){
    int K, T;
    cin >> K >> T;
    vector<int> a(T);
    rep(i, T) cin >> a[i];

    //一番個数の多いケーキの個数と、その種類(index)を保存
    int mx = 0;
    int mi;
    rep(i, T) mx = max(mx, a[i]);
    rep(i, T) if(mx == a[i]) mi = i;

    //一番個数の多いケーキ以外のケーキの個数の総和を求める
    int mi_elim_sum = 0;
    rep(i, T){
        if(i == mi) continue;
        mi_elim_sum += a[i];
    }

    //一番種類の多いケーキの個数mxが、mi_elim_sum+1を超えている時、連続が発生する可能性がある。
    int ans = 0;
    int sub = mx - mi_elim_sum;
    if(sub >= 1) ans = sub-1;
    else ans = 0;
    cout << ans << endl;
    return 0;
}