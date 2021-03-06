#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(){
    ll N;
    cin >> N;

    double ans = 1;
    double val = 1000000000;

    for(int i = 1; i <= N; i++){
        ans *= val;
        ans *= N;
        ans /= i;
        ans /= val;
    }
    printf("%.10lf\n", ans);
    return 0;
}