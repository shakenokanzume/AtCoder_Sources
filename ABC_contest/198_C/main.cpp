#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    ll R;
    double X, Y;
    cin >> R >> X >> Y;

    double dist = X*X + Y*Y;
    double foot = R*R;

    ll ans;
    if(dist < foot) ans = 2;
    else if(dist == foot) ans = 1;
    else{
        double val = sqrt(dist) / R;
        double cnt = val*val;
        ans = ceil(sqrt(cnt));
    }
    cout << ans << endl;
    return 0;
}