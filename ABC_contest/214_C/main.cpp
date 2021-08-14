#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)
const int lim = 1000000007;

int main(){
    int N;
    cin >> N;
    vector<ll> s(N), t(N);
    rep(i, N) cin >> s[i];
    rep(i, N) cin >> t[i];

    // 一番最初にボールがわたる人の番号を知る
    vector<pair<ll, int>> pr;
    rep(i, N){
        pr.emplace_back(t[i], i);
    }
    sort(pr.begin(), pr.end());
    int head = pr[0].second;

    vector<ll> ans(N, 0);
    ans[head] = pr[0].first;

    int now;
    int next;
    rep(i, N){
        now = (head + i) % N;
        next = (now + 1) % N;
        ans[next] = min(t[next], ans[now] + s[now]);
    }
    rep(i, N){
        cout << ans[i] << endl;
    }
    return 0;
}