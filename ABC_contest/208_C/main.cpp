#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)
const int lim = 1000000007;

int main(){
    ll N, K;
    cin >> N >> K;
    vector<int> a(N);
    rep(i, N) cin >> a[i];

    ll surp;
    if(K % N == 0){
        rep(i, N) cout << K / N << endl;
        return 0;
    }else{
        // 配列のコピー
        vector<int> cp(N);
        copy(a.begin(), a.end(), cp.begin());
        // 1つ多くもらえる国民の数
        surp = K % N;
        // 国民番号が小さいほうからsurp番目の国民の国民番号を調べる
        int val = 0;
        sort(cp.begin(), cp.end());
        val = cp[surp-1];

        rep(i, N){
            if(a[i] <= val) cout << K / N + 1 << endl;
            else cout << K / N << endl;
        }
        return 0;
    }
}