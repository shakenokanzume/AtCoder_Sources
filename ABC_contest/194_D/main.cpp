#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(){
    int N;
    cin >> N;

    double ans = 0;
    for(int i = 1; i < N; i++){
        ans += (double)N / (N-i);
    }
    printf("%.10lf\n", ans);
    return 0;
}