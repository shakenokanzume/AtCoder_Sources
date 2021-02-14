#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    string s;
    cin >> s;
    int N = (int)s.size();

    int ans = 0;
    rep(i, N){
        int a = s[i] - '0';
        // 奇数番目の時
        if(i % 2 == 0){
            ans += a;
        }
        // 偶数番目の時
        if(i % 2 != 0){
            ans -= a;
        }
    }
    cout << ans << endl;
    return 0;
}