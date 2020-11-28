#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    int N;
    cin >> N;
    string S;
    cin >> S;

    // 最終的な文字列を格納する
    string T;
    // foxの探索開始
    for(int i = 0; i < N; i++){
        T.push_back(S[i]);
        // 文字列Tの文字数が3未満の時は判定を行わない
        if(T.size() < 3) continue;
        // 文字列Tの末尾3文字を取り出し、'fox'と一致するかどうかを見る
        string t;
        // 文字列Tの末尾から3つ前のindex番号をpointに格納
        int point = T.size() - 3;
        t = T.substr(point, 3);
        if(t == "fox"){
            rep(j, 3) T.pop_back();
        }
    }
    cout << T.size() << endl;
    return 0;
}