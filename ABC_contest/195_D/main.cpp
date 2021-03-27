#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    int N, M, Q;
    cin >> N >> M >> Q;
    vector<pair<int, int>> obj(N);
    rep(i, N){
        int w, v;
        cin >> w >> v;
        // 入れる順番がv -> wの順で、問題の入力例と逆なので注意
        obj[i].first = v;
        obj[i].second = w;
    }
    vector<int> x(M);
    rep(i, M) cin >> x[i];

    // 荷物を価値の高い順にソート
    sort(obj.begin(), obj.end(), greater<pair<int, int>>());

    // 答えを格納していく配列
    vector<int> answer(Q);

    rep(i, Q){
        int l, r;
        cin >> l >> r;
        // 使えない箱の番号を格納する集合
        set<int> st;
        for(int j = l; j <= r; j++) st.insert(j);
        // 入れることできる荷物の価値の合計
        ll ans = 0;
        // すべての荷物に対してチェックを行う。
        rep(j, N){
            // この荷物が最も無駄なく入る大きさの箱を抑える
            int jst_sub = lim;
            int jst_i = lim;
            // すべての箱に対してチェック
            rep(k, M){
                if(st.count(k+1) == 1) continue;
                if(x[k] - obj[j].second < 0) continue;
                if(jst_sub > x[k] - obj[j].second){
                    jst_sub = x[k] - obj[j].second;
                    jst_i = k;
                }
            }
            
            // この場合は、この荷物を入れる箱がなかったことを意味するので、次の荷物に移動
            if(jst_i == lim) continue;

            // 最も適切な箱があった場合は、処理を行う
            ans += obj[j].first;
            // 使われてしまった箱は、使えない箱の一覧に追加
            st.insert(jst_i+1);
        }
        answer[i] = ans;
    }
    rep(i, Q) cout << answer[i] << endl;
    return 0;
}