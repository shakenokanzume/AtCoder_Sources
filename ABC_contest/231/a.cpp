#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)
#define repp(i, n) for(int i = 1; i < n; i++)
const int lim = 1000000007;

int main(){
    string s;
    cin >> s;
    int ans = (s[0] - '0') * (s[2] - '0');
    cout << ans << endl;
    return 0;
}