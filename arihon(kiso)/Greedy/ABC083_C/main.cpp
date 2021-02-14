#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    ll X, Y;
    cin >> X >> Y;

    // 数列の長さを格納
    int ans = 0;
    ll num = X;
    do{
        num *= 2;
        ans++;
    }while(num <= Y);
    cout << ans << endl;
    return 0;
}