#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)
const int lim = 1000000007;

int main(){
    int N;
    cin >> N;
    // 配列A_i, 配列B_c[j]において、ある数kが出てくる個数をそれぞれcnt_a[k], cnt_b[k]に格納
    vector<int> cnt_a(100000+1, 0);
    vector<int> cnt_b(100000+1, 0);

    // 入力
    vector<int> a(N+1), b(N+1), c(N+1);
    for(int i = 1; i < N+1; i++) cin >> a[i];
    for(int i = 1; i < N+1; i++) cin >> b[i];
    for(int i = 1; i < N+1; i++) cin >> c[i];

    // カウント
    for(int i = 1; i < N+1; i++){
        cnt_a[a[i]]++;
        cnt_b[b[c[i]]]++;
    }

    ll ans = 0;
    // 条件を満たす(i, j)の組の個数をカウント
    for(int i = 1; i < 100000+1; i++){
        ans += (ll)cnt_a[i] * (ll)cnt_b[i];
    }
    cout << ans << endl;
    return 0;
}