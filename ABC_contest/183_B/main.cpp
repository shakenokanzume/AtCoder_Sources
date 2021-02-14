#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    double Sx, Sy, Gx, Gy;
    cin >> Sx >> Sy >> Gx >> Gy;

    double ans;

    // 2点間のxに関する距離
    double dist_x = Gx - Sx;
    
    ans = dist_x * (Sy / (Sy + Gy)) + Sx;
    printf("%.7lf\n", ans);
    return 0;
}