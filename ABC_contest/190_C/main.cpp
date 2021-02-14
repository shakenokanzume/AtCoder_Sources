#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    int N, M;
    cin >> N >> M;
    vector<int> A(M), B(M);
    rep(i, M){
        int a, b;
        cin >> a >> b;
        a--, b--;
        A[i] = a;
        B[i] = b;
    }

    int K;
    cin >> K;
    vector<int> C(K), D(K);
    rep(i, K){
        int c, d;
        cin >> c >> d;
        c--, d--;
        C[i] = c;
        D[i] = d;
    }

    int mx = 0;
    rep(bit, (1 << K)){
        // 皿を表す配列（中身は、そのさらに乗っているボールの数）
        vector<int> sara(N, 0);
        rep(i, K){
            if(bit >> i & 1){
                sara[C[i]]++;
            }else{
                sara[D[i]]++;
            }
        }

        // 適合する条件の個数を数える
        int ans = 0;
        rep(i, M){
            if(sara[A[i]] >= 1 && sara[B[i]] >= 1) ans++;
        }

        mx = max(mx, ans);
    }
    cout << mx << endl;
    return 0;

}