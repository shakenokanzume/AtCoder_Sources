#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    int D;
    ll G;
    cin >> D >> G;
    vector<int> p(D), c(D);

    ll ans = lim;
    //どのボーナスを受け取るかを決定するforループ
    rep(bit, 1 << D){
        //解く問題数を格納する変数
        int cnt = 0;
        //ボーナスを得ない難易度で、最も点数の大きな難易度の番号を記憶
        int mx_i = -1;
        //現在の取得点数を記憶
        ll sum = 0;
        //ビット全探索開始
        rep(i, D){
            if(bit & (1 << i)){
                sum += c[i];
                sum += p[i] * (100 * (i+1));
            }else{
                //選ばない難易度の中で、一番大きな難易度が最終的にmx_iに格納される
                mx_i = i;
            }
        }
        //Gに達していないとき
        if(sum < G){
            ll sub = G - sum;
            int s1 = 100 * (mx_i + 1);
            //点数がGを超えるために必要な問題の個数
            int need = (sub - s1 + 1) / s1;
            if(need >= p[mx_i]) continue;
        }
        ans = min(ans, cnt);
    }
    cout << ans << endl;
    return 0;
}