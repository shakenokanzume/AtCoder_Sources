#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for (int i = 0; i < n; i++)

const int lim = 1000000007;

int main()
{
    double A, B;
    cin >> A >> B;

    double ans = 100 - (B / A)*100;

    printf("%.6lf\n", ans);
    return 0;
}