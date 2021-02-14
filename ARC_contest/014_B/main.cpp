#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

// 入力された文字列の最後の文字を返り値とする関数
char func(string s){
    char ref;
    reverse(s.begin(), s.end());
    ref = s[0];
    return ref;
}

void fin(int i){
    // 高橋くんの敗北
    if(i % 2 == 0){
        cout << "LOSE" << endl;
    }else{
        cout << "WIN" << endl;
    }
}

int main(){
    int N;
    cin >> N;
    vector<string> w(N);
    rep(i, N) cin >> w[i];

    // 一度出てきた単語を格納する集合
    set<string> st;
    // 1つ前の文字列の末尾のアルファベットを代入する変数
    char tale;

    // 最初の単語の処理
    st.insert(w[0]);
    tale = func(w[0]);

    // しりとり開始
    for(int i = 1; i < N; i++){
        // しりとり終了条件
        if(tale != w[i][0] || st.count(w[i]) != 0){
            fin(i);
            return 0;
        }
        // しりとり継続時処理
        st.insert(w[i]);
        tale = func(w[i]);
    }
    cout << "DRAW" << endl;
    return 0;
}