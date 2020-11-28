#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    ll N, M;
    cin >> N >> M;
    vector<ll> p(N+1);
    rep(i, N) cin >> p[i];
    //点数として0点もあるので、0を追加
    p.push_back(0);
    vector<ll> Q_i;
    //2つの点数を選んで和をとる
    rep(i, N+1){
        rep(j, N+1){
            ll sum = p[i] + p[j];
            Q_i.push_back(sum);
        }
    }
    //昇順にソート
    sort(Q_i.begin(), Q_i.end());
    int len = (int)Q_i.size();
    ll ans = 0;
    rep(i, len){
        //Q_i + Q_j <= Mを満たす、すなはち、Q_j <= M - Q_i　となるような最大のQ_jを求めたい。
        ll limit = M - Q_i[i];
        //M-Q_iよりも大きい最小のイテレータを取得する。
        auto j = upper_bound(Q_i.begin(), Q_i.end(), limit);
        //そのイテレータがQ_iの先頭を指していないならば、そのイテレータの直前の値（M-Q_i以下となる最大のいてれーたを取得）を参照する。
        if(j != Q_i.begin()){
            ans = max(ans, Q_i[i] + *(--j));
        }
    }
    cout << ans << endl;
    return 0;
}