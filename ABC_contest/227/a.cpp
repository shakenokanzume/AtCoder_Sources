#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)
#define repp(i, n) for(int i = 1; i < n; i++)
const int lim = 1000000007;

int main(){
    int N, K, A;
    cin >> N >> K >> A;
    int ans = K + A - 1;
    if(ans % N == 0) ans = N;
    else ans = ans  % N;
    cout << ans << endl;
    return 0;
}