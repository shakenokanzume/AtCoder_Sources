#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(){
    int H, W;
    cin >> H >> W;
    int N;
    cin >> N;
    //入力された回数分(a_i)だけ、iを追加する
    queue<int> q;
    for(int i = 1; i <= N; i++){
        int a;
        cin >> a;
        rep(j, a) q.push(i);
    }

    //色を塗るマス目の2次元配列
    vector<vector<int>> grid(H, vector<int>(W, 0));
    rep(i, H){
        //左から右に数字を追加していく
        if(i % 2 == 0){
            rep(j, W){
                grid[i][j] = q.front();
                q.pop();
            }
        }else{ //右から左に数字を追加していく
            for(int j = W-1; j >= 0; j--){
                grid[i][j] = q.front();
                q.pop();
            }
        }
    }

    rep(i, H){
        rep(j, W) cout << grid[i][j] << " ";
        cout << endl;
    }
    return 0;
}