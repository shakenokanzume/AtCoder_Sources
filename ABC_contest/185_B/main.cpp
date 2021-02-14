#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    ll N, M, T;
    cin >> N >> M >> T;
    // 初期状態においては、A=0, B=0として考える
    vector<ll> A(M+1, 0), B(M+1, 0);
    for(int i = 1; i < M+1; i++){
        cin >> A[i] >> B[i];
    }

    // 現在のバッテリー容量を表す変数
    ll cur_N = N;

    // ループ処理開始
    for(int i = 1; i < M+1; i++){
        // 1つ前のカフェを出てから、今のカフェに移るまでに消費されるバッテリー
        ll minus = A[i] - B[i-1];
        // 今のカフェで稼ぐことができるバッテリー
        ll plus = B[i] - A[i];

        // バッテリーの消費・供給計算
        cur_N -= minus;
        // バッテリー残量がなくなるなら、このタイミング
        if(cur_N <= 0){
            cout << "No" << endl;
            return 0;
        }

        cur_N = min(N, cur_N + plus);
    }

    // 最後のカフェを出てから、終了時間までに消費される文のバッテリー計算
    cur_N -= (T - B[M]);
    if(cur_N <= 0){
        cout << "No" << endl;
        return 0;
    }
    cout << "Yes" << endl;
    return 0;
}