#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    string x; cin >> x;
    int n; cin >> n;
    vector<string> s(n);
    rep(i, n) cin >> s[i];

    // a, b, c... -> x への変換をf
    // x -> a, b, c, ... への変換をg
    map<char, char> f, g;
    rep(i, 26) f[x[i]] = 'a' + i;
    rep(i, 26) g['a' + i] = x[i];

    rep(i, n){
        // xの文字順で書かれた名前s[i]を、a,b,c...順に書き換える
        for(char& c : s[i]){
            c = f[c];
        }
    }
    // 書き換えたのちにソート
    sort(s.begin(), s.end());
    rep(i, n){
        // xの文字順に直す（出力用）
        for(char& c : s[i]){
            c = g[c];
        }
    }
    rep(i, n) cout << s[i] << endl;
    return 0;
}