#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)
#define repp(i, n) for(int i = 1; i < n; i++)
const int lim = 1000000007;

int main(){
    int N;
    cin >> N;
    vector<double> a(N), b(N);
    rep(i, N) cin >> a[i] >> b[i];
    vector<double> time(N+1, 0.0);
    repp(i, N+1) time[i] = time[i-1] + (a[i-1] / b[i-1]);
    double mx_time = time[N];

    double ans = 0;
    double t = mx_time / 2;
    repp(i, N+2){
        if(t <= time[i]){
            double dt = (t) - time[i-1];
            ans += (dt * b[i-1]);
            cout << setprecision(15) << ans << endl;
            return 0;
        }else{
            ans += a[i-1];
        }
    }
}