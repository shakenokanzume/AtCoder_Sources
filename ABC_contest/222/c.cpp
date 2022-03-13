#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)
#define repp(i, n) for(int i = 1; i < n; i++)
const int lim = 1000000007;

int winner(int one, int ano){
    int is;
    if((one == 'G' && ano == 'C') || (one == 'C' && ano == 'P') || (one == 'P' && ano == 'G')) is = 0;
    else if((one == 'C' && ano == 'G') || (one == 'P' && ano == 'C') || (one == 'G' && ano == 'P')) is = 1;
    else if(one == ano) is = 2;
    return is;
}

int main(){
    int N, M;
    cin >> N >> M;
    vector<vector<char>> c(2*N, vector<char>(M));
    rep(i, 2*N) rep(j, M) cin >> c[i][j];

    vector<pair<int, int>> pr(2*N);
    rep(i, 2*N) pr[i].first = 0, pr[i].second = i;

    rep(i, M){
        rep(k, N){
            int one = pr[2*k].second;
            int ano = pr[2*k + 1].second;
            int judge = winner(c[one][i], c[ano][i]);
            // 勝利数が増えるごとに、カウントを減らすことで、ソートするときに昇順に並べればよいことになる
            if(judge == 0) pr[2*k].first--;
            else if(judge == 1) pr[2*k+1].first--;
            else if(judge == 2) continue;
        }
        sort(pr.begin(), pr.end());
    }

    rep(i, 2*N){
        cout << pr[i].second+1 << endl;
    }
    return 0;
}