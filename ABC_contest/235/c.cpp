#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)
#define repp(i, n) for(int i = 1; i < n; i++)
const int lim = 1000000007;

int main(){
    int n, q;
    cin >> n >> q;
    map<int, vector<int>> mp;
    rep(i, n){
        int a;
        cin >> a;
        mp[a].push_back(i);
    }

    vector<int> ans(q);
    rep(i, q){
        int x, k;
        cin >> x >> k;
        k--;
        int len = mp[x].size();
        if(len > k){
            ans[i] = mp[x][k] + 1;
        }else{
            ans[i] = -1;
        }
    }

    for(auto p : ans) cout << p << endl;
    return 0;
}