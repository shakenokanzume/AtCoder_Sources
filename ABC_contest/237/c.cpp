#include <bits/stdc++.h>
#include <atcoder/>
using namespace std;
using namespace atcoder;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)
#define repp(i, n) for(int i = 1; i < n; i++)
const int lim = 1000000007;

int main(){
    string s; cin >> s;
    // すべての文字がaだった場合例外処理
    bool is_a = true;
    rep(i, (int)s.size()){
        if(s[i] != 'a') is_a = false;
    }
    if(is_a){
        cout << "Yes" << endl;
        return 0;
    }

    // 先頭・末尾のa連続区間を除いた文字列を作成
    string t = "";
    int n = (int)s.size();
    int l = 0;
    while(s[l] == 'a') l++;
    int r = 0;
    string s_ = s;
    reverse(s_.begin(), s_.end());
    while(s_[r] == 'a') r++;
    rep(i, n){
        if(l <= i && i <= n-1-r) t.push_back(s[i]);
    }
    bool is = true;
    int m = (int)t.size();
    rep(i, m){
        if(t[i] != t[m-i-1]) is = false;
    }
    if(is && l <= r) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}