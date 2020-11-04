#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    int N;
    cin >> N;
    vector<double> a(N);
    rep(i, N) cin >> a[i];

    double l_1 = 0;
    rep(i, N){
        l_1 += fabs(a[i]);
    }

    double l_2 = 0;
    rep(i, N){
        l_2 += pow(a[i], 2);
    }
    l_2 = sqrt(l_2);

    double l_3 = 0;
    rep(i, N){
        l_3 = max(l_3, fabs(a[i]));
    }

    printf("%.11f\n", l_1);
    printf("%.11f\n", l_2);
    printf("%.11f\n", l_3);
    return 0;
}