#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)
const int lim = 1000000007;

int main(){
    int N, M;
    cin >> N >> M;
    int len = N + M;
    // secondには、数列a由来ならtrue, 数列b由来ならfalseを入れる
    vector<pair<int, bool>> a;
    rep(i, N){
        int x;
        cin >> x;
        a.emplace_back(x, true);
    }
    rep(i, M){
        int x;
        cin >> x;
        a.emplace_back(x, false);
    }
    sort(a.begin(), a.end());
    int mn = lim;
    rep(i, len-1){
        if(a[i].second != a[i+1].second){
            mn = min(mn, abs(a[i+1].first - a[i].first));
        }
    }
    cout << mn << endl;
    return 0;
}