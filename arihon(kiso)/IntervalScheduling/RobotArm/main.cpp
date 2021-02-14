#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    int N;
    cin >> N;
    vector<pair<ll, ll>> pr;
    rep(i, N){
        ll c, l;
        cin >> c >> l;
        // あるロボットに関する左端と右端をpair型変数に格納
        pr.emplace_back(c-l, c+l);
    }

    // 各ロボットの右端について、昇順にソート
    sort(pr.begin(), pr.end(), [](pair<ll, ll> a, pair<ll, ll> b){return a.second < b.second;});

    // 残せるロボットの数を格納
    int ans = 0;
    // 今見ているロボットの右端を格納（初期値は十分小さな値）
    ll right = -1 * pow(10, 18) - 155;
    rep(i, N){
        // 今見ているロボットの右端が、次のロボットの左端より大きくなった場合は、そのロボットを除く
        if(right > pr[i].first) continue;
        ans++;
        right = pr[i].second;
    }
    cout << ans << endl;
    return 0;
}