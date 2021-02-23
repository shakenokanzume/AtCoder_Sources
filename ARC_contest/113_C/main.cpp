#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

void init(map<char, int>& mp){
    // mapの初期化
    rep(i, 26){
        mp['a' + i] = 0;
    }
}

int main(){
    string s;
    cin >> s;
    int N = (int)s.size();

    // アルファベットをfirstに、そのアルファベットの出現回数をsecondに入れる
    map<char, int> mp;
    init(mp);

    ll ans = 0;
    
    // 文字列sを後ろから見ていく
    // 同じアルファベットが2つ続く部分があれば、そこから操作が可能な回数をカウントする
    for(int i = N-1; i >= 1; i--){
        // 今のインデックスを含めて、今のインデックスから末尾までの文字数を格納
        int len = N - i;
        if(s[i] == s[i-1]){
            // 操作の可能回数を計上(操作ができる範囲に今自分がいるインデックスは含まれないため、-1している)
            ans += (len - mp[s[i]] - 1);
            // すべてのアルファベットのsecondを書き換える
            init(mp);
            mp[s[i]] = len;
        }else{
            mp[s[i]]++;
        }
    }
    cout << ans << endl;
    return 0;
}