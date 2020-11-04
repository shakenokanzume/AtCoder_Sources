#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    const int num = 998244353;
    ll A, B, C;
    cin >> A >> B >> C;
    
    //等差数列の和の公式から
    ll sum_A = A*(A+1) / 2;
    sum_A %= num;
    ll sum_B = B*(B+1) / 2;
    sum_B %= num;
    ll sum_C = C*(C+1) / 2;
    sum_C %= num;

    ll ans = (((sum_A * sum_B) % num) * sum_C) % num;
    cout << ans << endl;
    return 0;
}