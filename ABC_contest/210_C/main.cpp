#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    int N, K;
    cin >> N >> K;
    vector<int> c(N);
    rep(i, N) cin >> c[i];
    // 各色の出現回数をカウントする
    map<int, int> mp;

    // 初期化
    for(int i = 0; i <= K-1; i++){
        mp[c[i]]++;
    }
    // 最大値を計算
    int mx = mp.size();
    for(int i = 0; i+K < N; i++){
        // 新しく入ってくる物に対して
        mp[c[i+K]]++;
        // 範囲から出る物に対して
        mp[c[i]]--;
        if(mp[c[i]] <= 0) mp.erase(c[i]);

        // 最大値をカウント
        mx = max(mx, (int)mp.size());
    }
    cout << mx << endl;
    return 0;
}