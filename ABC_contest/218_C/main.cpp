#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int n;

// #を含む部分をすべて入れた、最小の四角形を取得する関数
vector<vector<char>> minimum_square(vector<vector<char>> c){
    int left = lim; int up = lim;
    int right = 0; int down = 0;
    rep(i, n) rep(j, n){
        if(c[i][j] == '#'){
            // 上下左右の境界となるindexの更新
            up = min(up, i);
            down = max(down, i);
            left = min(left, j);
            right = max(right, j);
        }
    }
    // 出力用配列の作成
    vector<vector<char>> output(down-up+1, vector<char>(right-left+1));
    rep(i, n){
        if(up <= i && i <= down){
            rep(j, n){
                if(left <= j && j <= right){
                    output[i-up][j-left] = c[i][j];
                }
            }
        }
    }
    return output;
}

int main(){
    cin >> n;
    vector<vector<char>> s(n, vector<char>(n));
    vector<vector<char>> t(n, vector<char>(n));
    rep(i, n) rep(j, n) cin >> s[i][j];
    rep(i, n) rep(j, n) cin >> t[i][j];

    vector<vector<char>> s_ = minimum_square(s);
    vector<vector<char>> t_ = minimum_square(t);

    int hs = sizeof(s_) / sizeof(s_[0]);
    int ws = sizeof(s_[0]) / sizeof(s_[0][0]);
    int ht = sizeof(t_) / sizeof(t_[0]);
    int wt = sizeof(t_[0]) / sizeof(t_[0][0]);
    // 4通りの回転を実装
    string ans = "No";
    // 0度と180度
    if(hs == ht && ws == wt){
        bool is1 = true;
        bool is2 = true;
        rep(i, hs) rep(j, ws){
            if(s_[i][j] != t_[i][j]) is1 = false;
            if(s_[i][j] != t_[hs-i-1][ws-j-1]) is2 = false;
        }
        if(is1 || is2){
            cout << "Yes" << endl;
            return 0;
        }
    }
    // 90度と270度
    if(hs == wt && ws == ht){
        bool is1 = true;
        bool is2 = true;
        rep(i, hs) rep(j, ws){
            if(s_[i][j] != t_[j][ht-i-1]) is1 = false;
            if(s_[i][j] != t_[wt-j-1][i]) is2 = false;
        }
        if(is1 || is2){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}