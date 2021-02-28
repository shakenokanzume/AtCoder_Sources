#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    int a, b;
    cin >> a >> b;

    int sub = abs(a - b);
    int ans = min(sub, 10 - sub);
    cout << ans << endl;
    return 0;
}