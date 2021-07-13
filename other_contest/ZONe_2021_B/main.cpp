#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    int N;
    double D, H;
    cin >> N >> D >> H;
    double mx = 0;

    rep(i, N){
        double d, h;
        cin >> d >> h;
        if(d == D) continue;
        double b = H - (H-h)*D/(D-d);
        mx = max(b, mx);
    }
    printf("%.10lf\n", mx);
    return 0;
}