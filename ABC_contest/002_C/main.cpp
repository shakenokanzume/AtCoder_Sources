#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    int x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    double ans = (x1-x3) * (y2-y3) - (x2-x3) * (y1-y3);
    ans = 0.5 * abs(ans);
    printf("%.5lf\n", ans);
    return 0;
}