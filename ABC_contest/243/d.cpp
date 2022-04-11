#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    ll n, x; cin >> n >> x;
    string s; cin >> s;
    
    // 現在いる頂点の番号を2進数にして格納する文字列
    string t;
    while(x > 0){
        // x&1 は、xの2進数での1の位を取り出す処理
        t += '0' + (x&1);
        // 1の位を取り出したら、1の位を消去（10進数でいうことの2で割るのと同じ）
        x = (x>>1);
    }
    
    // 並びが1の位空になっているので、逆にする
    reverse(t.begin(), t.end());

    // 処理開始
    for(char c : s){
        if(c == 'U') t.pop_back();
        else if(c == 'L') t += '0';
        else if(c == 'R') t += '1';
    }
    // 2進数(文字列)→10進数に変換
    x = 0;
    for(char c : t){
        x = x<<1 | (c-'0');
    }
    cout << x << endl;
    return 0;
}