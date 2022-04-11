#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    vector<char> s(3), t(3);
    rep(i, 3) cin >> s[i];
    rep(i, 3) cin >> t[i];
    int zure = 0;
    rep(i, 3){
        if(s[i] != t[i]) zure++;
    }
    if(zure == 0 || zure == 3) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}