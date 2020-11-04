#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int INF = 101010101;

int main(){
    int n, m, x;
    cin >> n >> m >> x;
    int c[n];
    int a[n][m];
    rep(i, n){
        cin >> c[i];
        rep(j, m) cin >> a[i][j];
    }
    int ans = INF; //すべての買い方の中での、条件を満たす場合の値段の最小値
    rep(s, 1<<n){ //sに、バイナリビット列を入れていく（0~10^nの2進数の値まで）
        int cost = 0; //買い終えた後の値段の合計
        int d[m] = {0}; //各アルゴリズムの理解度
        rep(i, n){
            if(s>>i&1){ //i個目の本を買うかどうか調べる（sの本の番号と一致する値を、最下位ビットに移動している
                cost += c[i];
                rep(j, m) d[j] += a[i][j];
            }
        }
        bool is = true;
        rep(j, m) if(d[j] < x) is = false; //すべてのアルゴリズムの理解度がx以上であるかの確認
        if(is) ans = min(ans, cost); //上の条件を満たすなら、ans(最小の値段)を更新
    }
    if(ans == INF) cout << -1 << endl; //すべてのアルゴリズムの理解度がx以上となるような買い方が無かった場合
    else cout << ans << endl;
    return 0;
}