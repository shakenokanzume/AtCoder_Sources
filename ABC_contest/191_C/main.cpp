#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    int h, w;
    cin >> h >> w;
    vector<vector<char>> s(h, vector<char>(w));
    rep(i, h) rep(j, w) cin >> s[i][j];

    // 頂点が何個あるか格納（答え）
    int ans = 0;

    // 2x2の正方形の左上のマスに注目する
    // 左上のマスを決定するループ
    rep(i, h-1){
        rep(j, w-1){
            // 2x2の正方形内に何個黒のマスが存在したかどうかを格納
            int cnt = 0;
            rep(di, 2){
                rep(dj, 2){
                    if(s[i+di][j+dj] == '#'){
                        cnt++;
                    }
                }
            }
            if(cnt == 1 || cnt == 3) ans++;
        }
    }
    cout << ans << endl;
    return 0;
}