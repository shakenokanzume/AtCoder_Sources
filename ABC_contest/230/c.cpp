#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    ll N, A, B;
    ll P, Q, R, S;

    cin >> N >> A >> B >> P >> Q >> R >> S;

    ll left1 = max(1-A, 1-B);
    ll right1 = min(N-A, N-B);
    ll left2 = max(1-A, B-N);
    ll right2 = min(N-A, B-1);

    vector<vector<char>> c(Q-P+1, vector<char>(S-R+1, '.'));
    // i, jは、[[P, Q], [R, S]]の四角形領域内での座標の値
    for(ll i = 0; i < (Q-P+1); i++){
        for(ll j = 0; j < (S-R+1); j++){
            // NxNマスの領域での座標の値
            ll i_ = i + P;
            ll j_ = j + R;
            // (A, B)からクロスを描く直線状に(i_, j_)が乗っていることをチェック
            if(i_-j_ == A-B || i_+j_ == A+B) c[i][j] = '#';
        }
    }
    
    rep(i, Q-P+1){
        rep(j, S-R+1){
            cout << c[i][j];
        }
        cout << endl;
    }
    return 0;
}