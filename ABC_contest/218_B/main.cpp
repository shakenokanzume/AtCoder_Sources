#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)
const int lim = 1000000007;

int main(){
    vector<int> p(26);
    rep(i, 26) cin >> p[i];

    string ans;
    rep(i, 26){
        ans.push_back(char('a' + p[i] - 1));
    }
    cout << ans << endl;
    return 0;
}