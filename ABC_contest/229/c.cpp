#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)
#define repp(i, n) for(int i = 1; i < n; i++)
const int lim = 1000000007;

int main(){
    int N, W;
    cin >> N >> W;
    vector<pair<int, int>> pr(N);
    ll ans = 0;
    rep(i, N){
        int a, b;
        cin >> a >> b;
        pr.emplace_back(a, b);
    }
    sort(pr.begin(), pr.end(), greater<pair<int, int>>());
    ll sum = 0;
    rep(i, N){
        ans += (ll)pr[i].first * min((ll)pr[i].second, W - sum);
        if(pr[i].second + sum >= W){
            break;
        }else{
            sum += pr[i].second;
        }
    }
    cout << ans << endl;
    return 0;
}