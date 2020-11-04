#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(){
    int N, M;
    cin >> N >> M;
    vector<int> k(M);
    vector<vector<int>> s(M, vector<int>());
    vector<int> p(M);
    rep(i, M){
        cin >> k[i];
        rep(j, k[i]){
            int S;
            cin >> S;
            s[i].push_back(S);
        }
    }
    rep(i, M) cin >> p[i];

    int ans = 0; //すべての電球が点灯するような組み合わせを数える
    //スイッチの状態のforループ(ビット全探索)
    for(int bit = 0; bit < (1<<N); bit++){
        int cnt = 0; //点灯している電球の個数
        //各電球を見ていくループ
        rep(i, M){
            int count = 0; //onになっているスイッチの個数
            //各電球にいおいて、スイッチの状態を見るループ
            rep(j, k[i]){
                int shift = s[i][j] - 1;
                if(bit & (1 << shift)) count++;
            }
            if(count % 2 == p[i]) cnt++;
        }
        if(cnt == M) ans++;
    }
    cout << ans << endl;
    return 0;
}