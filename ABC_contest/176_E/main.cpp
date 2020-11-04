#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(){
    int H, W, M;
    cin >> H >> W >> M;
    //各行、列に存在する爆破対象の分布を格納
    vector<int> h(H), w(W);
    //爆破対象の座標を集合stに格納
    set<pair<int, int>> st;

    //入力
    rep(i, M){
        int r, c;
        cin >> r >> c;
        r--, c--;
        h[r]++;
        w[c]++;
        st.emplace(r, c);
    }

    //各行、列に分布している爆破対象の最大値を格納
    int mh = 0, mw = 0;
    rep(i, H) mh = max(mh, h[i]);
    rep(i, W) mw = max(mw, w[i]);

    //爆破対象を最大値と同じだけ持つ行、列の番号を格納
    vector<int> ih, iw;
    rep(i, H) if(h[i] == mh) ih.push_back(i);
    rep(i, W) if(w[i] == mw) iw.push_back(i);

    //爆破対象を最大値分持つ行、列の交差する点に、爆破対象が存在するかをチェック
    //爆破対象が存在しない点が1つでもあるなら、ans = mh + mw;
    //爆破対象が存在しない点が見つからないなら、ans = mh + mw -1;
    int ans = mh + mw;
    rep(i, (int)ih.size()){
        rep(j, (int)iw.size()){
            //交差点に爆破対象が存在ない物がみつかれば、答えを出力して終了
            if(st.count(make_pair(ih[i], iw[j]))) continue;
            cout << ans << endl;
            return 0;
        }
    }
    ans--;
    cout << ans << endl;
    return 0;
}