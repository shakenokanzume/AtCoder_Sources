#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    int N;
    cin >> N;
    vector<int> x(N), y(N);
    rep(i, N) cin >> x[i] >> y[i];

    int mx = 0;
    rep(i, N){
        rep(j, N){
            int dist = pow(x[i] - x[j], 2) + pow(y[i] - y[j], 2);
            mx = max(mx, dist);
        }
    }
    double ans = sqrt((double)mx);
    cout << ans << endl;
    return 0;
}