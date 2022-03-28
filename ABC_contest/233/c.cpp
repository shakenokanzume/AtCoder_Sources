#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;


int N;
ll X;
vector<vector<int>> a;
// 条件を満たすボールの取り出し方の総数
int ans = 0;

void dfs(int depth, ll seki){
    if(depth == N){
        // すべての袋から取り出し終わった後に、積がXと等しい場合はその取り出し方を回答として可算
        if(seki == X) ans++;
        // どちらにせよ、DFSは返す
        return;
    }else{
        // sekiの値がXを超えている場合には、DFSの探索を中断して、別の枝に移る
        for(auto p : a[depth]){
            if(seki > X / p) continue;
            else dfs(depth + 1, seki * p);
        }
    }
}

int main(){
    cin >> N >> X;
    a.resize(N);
    rep(i, N){
        int L;
        cin >> L;
        a[i].resize(L);
        rep(j, L) cin >> a[i][j];
    }

    dfs(0, 1);
    cout << ans << endl;
    return 0;
}