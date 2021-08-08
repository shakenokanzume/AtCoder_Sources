#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)
const int lim = 1000000007;

int main(){
    string S;
    cin >> S;
    // 〇と×がついていた値を格納する配列
    vector<int> maru, batu;
    int N = (int)S.size();
    rep(i, N){
        if(S[i] == 'o') maru.push_back(i);
        if(S[i] == 'x') batu.push_back(i);
    }

    ll ans = 0;

    // 暗証番号として考えられるもの10000通りをすべてチェック
    rep(i, 10000){
        // 暗証番号に含まれる番号のインデックスには1を、そうでなければ0を代入する配列
        set<int> is;

        int pass = i;
        rep(j, 4){
            is.insert(pass % 10);
            pass /= 10;
        }
        
        // passが暗証番号としてあり得ない場合の処理
        bool wh = true;
        rep(j, (int)maru.size()) if(is.count(maru[j]) == 0) wh = false;
        rep(j, (int)batu.size()) if(is.count(batu[j]) == 1) wh = false;

        // passが暗証番号としてあり得る場合の処理
        if(wh) ans++;
    }
    cout << ans << endl;
    return 0;
}