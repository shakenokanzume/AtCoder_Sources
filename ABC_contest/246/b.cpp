#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    int a, b; cin >> a >> b;
    double theta = atan2(b, a);
    double x = cos(theta);
    double y = sin(theta);
    printf("%.7f\n", x);
    printf("%.7f\n", y);
    return 0;
}