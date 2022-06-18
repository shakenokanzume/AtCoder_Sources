#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    int n, k; cin >> n >> k;
    // 文字列S_iに、各アルファベットが含まれるかを記録する
    vector<vector<bool>> c(n, vector<bool>(26, false));
    rep(i, n){
        string s; cin >> s;
        // 文字列S_iに含まれるアルファベットのところをtrueに変更
        rep(j, (int)s.size()){
            c[i][s[j]-'a'] = true;
        }
    }
    int ans = 0;
    // bit全探索
    for(int bit = 0; bit < (1<<n); bit++){
        // 今回の文字列の選ばれ方における、各アルファベットの出現回数を格納する
        vector<int> alpha(26, 0);
        for(int i = 0; i < n; i++){
            if(bit & (1 << i)){
                // 文字列s_iが選ばれている場合
                rep(j, 26){
                    if(c[i][j]) alpha[j]++;
                }
            }
        }
        // 各アルファベットの出現回数がkと同じ物の個数を見る
        int cnt = 0;
        rep(j, 26) if(alpha[j] == k) cnt++;
        ans = max(ans, cnt);
    }
    cout << ans << endl;
    return 0;
}