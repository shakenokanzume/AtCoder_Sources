#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

//  与えられた文字列の点数を返す関数
ll f(string s){
    // 与えられた文字列の数字の分布を見る
    vector<int> c(10, 0);
    rep(i, 5) c[s[i]-'0']++;
    ll ref = 0;
    for(int i = 1; i < 10; i++){
        ll val = 1;
        rep(j, c[i]) val *= 10;
        ref += i * val;
    }
    return ref;
}

int main(){
    int K;
    cin >> K;
    string s, t;
    cin >> s >> t;

    // 残っている山札のカードの分布を格納する配列
    vector<int> c(10, K);
    c[0] = 0;
    rep(i, 4) c[s[i]-'0']--;
    rep(i, 4) c[t[i]-'0']--;

    // sの最後のカードの数字a, tの最後のカードの数字bを選ぶ場合の数を求めていく
    ll cnt = 0;
    for(int a = 1; a <= 9; a++){
        for(int b = 1; b <= 9; b++){
            // 文字列s, tの末尾をa, bで書き換える（関数f()内で処理するため）
            s[4] = '0'+a;
            t[4] = '0'+b;

            // 高橋君が青木君に勝つような選び方の場合のみ、cntに場合の数を追加していく
            if(f(s) > f(t)){
                if(a == b) cnt += (ll)c[a] * (c[a]-1);
                else cnt += (ll)c[a] * c[b];
            }
        }
    }
    // 確率計算に用いる、すべての場合の数を数える
    // 残りのすべての山札から、それぞれの文字列の最後の1枚を選ぶ場合の数は、(K-8)*(K-9)通り
    ll total = ll(9*K-8) * (9*K-9);

    double p = (double)cnt / total;
    printf("%.10lf\n", p);
    return 0;
}