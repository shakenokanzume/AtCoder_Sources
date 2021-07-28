#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    int N, K;
    cin >> N >> K;
    vector<vector<char>> c(N, vector<char>(N));
    rep(i, N) rep(j, N) cin >> c[i][j];

    // 移動要素
    vector<int> dx = {0, 1, 0, -1};
    vector<int> dy = {-1, 0, 1, 0};

    // 各点にアクセス
    rep(i, N){
        rep(j, N){
            if(c[i][j] == '#') continue;
            // 条件を満たした盤の状態を格納する配列
            set<vector<vector<char>>> st;
            // 探索開始点
        }
    }
    return 0;
}