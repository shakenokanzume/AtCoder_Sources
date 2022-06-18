#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    int h, w; cin >> h >> w;
    vector<pair<int, int>> pr;
    rep(i, h){
        string t; cin >> t;
        rep(j, (int)t.size()){
            if(t[j] == 'o') pr.emplace_back(i, j);
        }
    }
    int ans = abs(pr[0].first - pr[1].first) + abs(pr[0].second - pr[1].second);
    cout << ans << endl;
    return 0;
}