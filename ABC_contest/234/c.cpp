#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)
#define repp(i, n) for(int i = 1; i < n; i++)
const int lim = 1000000007;

int main(){
    ll K;
    cin >> K;
    string ans = "";
    // ２進数（1のところは2）で表記する
    while(K != 0){
        ans += (K % 2 == 0 ? "0" : "2");
        K /= 2;
    }
    reverse(ans.begin(), ans.end());
    cout << ans << endl;
    return 0;
}