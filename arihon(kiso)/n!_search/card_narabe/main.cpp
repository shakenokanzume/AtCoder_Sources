#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    int N, K;
    cin >> N >> K;
    vector<string> a(N);
    rep(i, N) cin >> a[i];

    int ans = 0;
    // 作成した過去の値を格納する集合
    set<string> st;
    // カードの並び順を、辞書順で最も小さい並びにする
    sort(a.begin(), a.end());
    // カードの全順列を求める
    // 先頭からK個の要素を取ってきて、結合して、値を作る
    do{
        string S = "";
        rep(i, K){
            S += a[i];
        }
        // 過去にその値が出現していない場合は、答えをインクリメントし、値を集合に加える
        if(st.count(S) == 0){
            ans++;
            st.insert(S);
        }
    }while(next_permutation(a.begin(), a.end()));
    cout << ans << endl;
    return 0;
}