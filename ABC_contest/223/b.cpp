#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)
#define repp(i, n) for(int i = 1; i < n; i++)
const int lim = 1000000007;

int main(){
    string s;
    cin >> s;
    string mx = s;
    string mn = s;
    int N = (int)s.size();
    string S = s;
    // 右シフト
    rep(i, N){
        string t = s.substr(N-1);
        s.pop_back();
        s = t + s;
        mx = max(mx, s);
        mn = min(mn, s);
    }
    cout << mn << endl;
    cout << mx << endl;
    return 0;
}