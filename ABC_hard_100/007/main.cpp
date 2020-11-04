#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(){
    int N, M;
    cin >> N >> M;
    vector<int> a(N);
    rep(i, N) cin >> a[i];
    //priority_queに、大きいものから順に最大N個の値（Cの値)を入れるために、一度mapに入れる
    map<int, int, greater<int>> mp;
    rep(i, M){
        int b, c;
        cin >> b >> c;
        mp[c] += b;
    }
    //priority_queに、Cの値を大きいものから順に最大N個まで入れる（N個以上は絶対に使うことはないため）
    priority_queue<int> p_que;
    for(auto p : mp){
        //1つめの継続条件は、Cの値の個数が0でないかを確認するためのもの
        //2つめの継続条件は、p_queに入った整数の個数がN個に達していないこと
        while(p.second != 0 && p_que.size() < N){
            p_que.push(p.first);
            p.second--;
        }
    }
    //配列aの小さな値から、p_que内の大きな値を用いて変更していく。
    sort(a.begin(), a.end());
    ll ans = 0;
    rep(i, N){
        //M個のBの合計がNを下回る、すなはち、変更可能な整数であるCの個数がN個を下回っている可能性も、入力によってはありうる
        //そのため、p_queが空になった時の動作も与えておかなければならない。
        if(a[i] < p_que.top() && !p_que.empty()){
            ans += p_que.top();
            p_que.pop();
        }else{
            ans += a[i];
        }
    }
    cout << ans << endl;
    return 0;
}