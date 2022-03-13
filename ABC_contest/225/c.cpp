#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)
#define repp(i, n) for(int i = 1; i < n; i++)
const int lim = 1000000007;

int main(){
    int N, M;
    cin >> N >> M;
    vector<vector<int>> b(N, vector<int>(M));
    rep(i, N) rep(j, M) cin >> b[i][j];
    vector<vector<int>> h(N, vector<int>(M));
    vector<vector<int>> w(N, vector<int>(M));

    // b[i][j]の各値は、b[I(!= i)][J(!=j)]の値と同じになることはない
    // b[i][j]の各値に対して、i, jは一意に決まる
    rep(i, N){
        rep(j, M){
            h[i][j] = (b[i][j] + 7 - 1) / 7 - 1;
            w[i][j] = (b[i][j]-1) % 7;
        }
    }

    bool is = true;
    rep(i, N){
        rep(j, M){
            if(i > 0 && h[i][j] != h[i-1][j]+1) is = false;
            if(j > 0 && w[i][j] != w[i][j-1]+1) is = false;
            if(i > 0 && w[i][j] != w[i-1][j]) is = false;
            if(j > 0 && h[i][j] != h[i][j-1]) is = false;
        }
    }
    if(is) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}