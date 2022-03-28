#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)
#define repp(i, n) for(int i = 1; i < n; i++)
const int lim = 1000000007;

int main(){
    int N;
    cin >> N;
    vector<int> x(N), y(N);
    rep(i, N) cin >> x[i] >> y[i];
    double mx = 0;
    rep(i, N){
        rep(j, N){
            double dist = (x[i]-x[j]) * (x[i]-x[j]) + (y[i]-y[j]) * (y[i]-y[j]);
            dist = sqrt(dist);
            mx = max(mx, dist);  
        }
    }
    cout << setprecision(10) << mx << endl;
    return 0;
}