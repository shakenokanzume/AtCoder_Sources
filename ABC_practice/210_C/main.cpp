#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    int N, K;
    cin >> N >> K;
    vector<ll> c(N);
    rep(i, N) cin >> c[i];
    // 連続区間内に含まれる色を格納する
    set<ll> st;
    // 各色の出現回数をカウントする
    map<ll, int> mp;

    // 初期化
    for(int i = 0; i <= K-1; i++){
        st.insert(c[i]);
        mp[c[i]]++;
    }
    // 最大値を計算
    ll mx = st.size();
    for(int i = 1; i+K < N; i++){
        // 新しく入ってくる物に対して
        mp[c[i+K]]++;
        st.insert(c[i+K]);
        // 範囲から出る物に対して
        mp[c[i-1]]--;
        if(mp[c[i-1]] <= 0) st.erase(c[i-1]);

        // 最大値をカウント
        mx = max(mx, (ll)st.size());
    }
    cout << mx << endl;
    return 0;
}