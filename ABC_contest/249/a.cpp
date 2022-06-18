#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    int a, b, c, d, e, f, x; cin >> a >> b >> c >> d >> e >> f >> x;

    int taka = 0;
    int aoki = 0;

    int taka_len = (x / (a + c)) * a;
    taka_len += min(x % (a + c), a);
    taka = taka_len * b;

    int aoki_len = (x / (d + f)) * d;
    aoki_len += min(x % (d + f), d);
    aoki = aoki_len * e;

    if(taka > aoki) cout << "Takahashi" << endl;
    else if(taka < aoki) cout << "Aoki" << endl;
    else cout << "Draw" << endl;
    return 0;
}