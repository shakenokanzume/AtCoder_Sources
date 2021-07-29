#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(){
    string s = " ";
    string t;
    cin >> t;
    s += t;
    int N = (int)t.size();
    bool is = true;
    //Sが回文であることのチェック
    int a = N/2;
    rep(i, a){
        if(s[1+i] != s[N-i]) is = false;
    }
    //1文字目から(N-1)/2文字目までが回文であることのチェック
    int b = a/2;
    rep(i, b){
        if(s[1+i] != s[(N-1)/2-i]) is = false;
    }
    //(N+3)/2文字目からN文字目までが回文であることのチェック
    rep(i, b){
        if(s[(N+3)/2+i] != s[N-i]) is = false;
    }
    if(is) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}