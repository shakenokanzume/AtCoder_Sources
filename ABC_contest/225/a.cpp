#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)
#define repp(i, n) for(int i = 1; i < n; i++)
const int lim = 1000000007;

int main(){
    string s;
    cin >> s;
    int cnt = 0;
    if(s[0] == s[1] && s[1] == s[2]) cnt = 1;
    else if(s[0] == s[1] || s[1] == s[2] || s[2] == s[0]) cnt = 2;
    else cnt = 3;

    int ans;
    if(cnt == 1) ans = 1;
    if(cnt == 2) ans = 3;
    if(cnt == 3) ans = 6;
    cout << ans << endl;
    return 0;
}