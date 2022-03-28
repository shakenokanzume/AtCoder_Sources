#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    int n; cin >> n;
    vector<int> x(n), y(n);
    rep(i, n) cin >> x[i] >> y[i];
    string s; cin >> s;

    map<int, vector<pair<int, int>>> mp;
    rep(i, n){
        // 同じy座標にある点をまとめ、各点のx軸座標と、どちらに動くか（Leftなら0, Rightなら1）を管理
        mp[y[i]].push_back(make_pair(x[i], s[i] == 'L' ? 0 : 1));
    }
    string ans = "No";
    for(auto p : mp){
        // mp内のvectorを、x軸座標が小さい順にソート
        sort(p.second.begin(), p.second.end());
        // x座標が小さい順に並べたときに、異動方向が、L→Rの順で並んでいる部分があるかどうか
        rep(i, (int)p.second.size()-1){
            if(p.second[i].second == 1 && p.second[i+1].second == 0){
                ans = "Yes";
                break;
            }
        }
    }
    cout << ans << endl;
    return 0;
}