#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    int N;
    cin >> N;
    ll sum = 0;
    rep(i, N){
        ll a, b;
        cin >> a >> b;
        ll a_sum = (a-1) * a / 2;
        ll b_sum = b * (b+1) / 2;
        sum += (b_sum - a_sum);
    }
    cout << sum << endl;
    return 0;
}