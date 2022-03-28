#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)
#define repp(i, n) for(int i = 1; i < n; i++)
const int lim = 1000000007;

int main(){
    int N, M;
    cin >> N >> M;
    vector<vector<bool>> takahashi(N, vector<bool>(N, false));
    vector<vector<bool>> aoki(N, vector<bool>(N, false));
    rep(i, M){
        int a, b;
        cin >> a >> b;
        a--, b--;
        takahashi[a][b] = takahashi[b][a] = true;
    }
    rep(i, M){
        int a, b;
        cin >> a >> b;
        a--, b--;
        aoki[a][b] = aoki[b][a] = true;
    }
    vector<int> mirror(N);
    rep(i, N) mirror[i] = i;

    do{
        bool is = true;
        rep(i, N){
            rep(j, N){
                if(takahashi[i][j] != aoki[mirror[i]][mirror[j]]){
                    is = false;
                    break;
                }
            }
        }
        if(is){
            cout << "Yes" << endl;
            return 0;
        }
    }while(next_permutation(mirror.begin(), mirror.end()));
    cout << "No" << endl;
    return 0;
}