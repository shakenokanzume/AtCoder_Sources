#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(){
    ll A, B;
    //double型でbを受け取って、その100倍をllにキャストする方法ではWAとなる。
    //そのため、string型でbを受け取ってll型に変換すれば、誤差の影響を考えなくて良い。
    string b;
    cin >> A >> b;
    B = 100*(b[0] - '0') + 10*(b[2] - '0') + (b[3] - '0');
    ll ans = A * B;
    ans /= 100;
    cout << ans << endl;
    return 0;
}