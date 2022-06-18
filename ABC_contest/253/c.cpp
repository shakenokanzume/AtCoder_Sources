#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    int q; cin >> q;
    map<int, int> mp;
    int mx = -1, mn = 2e9;
    rep(i, q){
        int val; cin >> val;
        if(val == 1){
            int x; cin >> x;
            mp[x]++;
        }else if(val == 2){
            int x, c; cin >> x >> c;
            mp[x] -= min(c, mp[x]);
            if(mp[x] <= 0){
                mp.erase(x);
            }
        }else if(val == 3){
            int out = int((--mp.end())->first) - int(mp.begin()->first);
            cout << out << endl;
        }
    }
    return 0;
}