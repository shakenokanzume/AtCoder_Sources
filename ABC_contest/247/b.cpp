#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    int n; cin >> n;
    vector<pair<string, string>> pr(n);
    rep(i, n){
        string s, t;
        cin >> s >> t;
        pr[i] = make_pair(s, t);
    }

    rep(i, n){
        bool is_s = false;
        bool is_t = false;
        string sei = pr[i].first;
        string mei = pr[i].second;
        rep(j, n){
            if(i == j) continue;
            if(sei == pr[j].first || sei == pr[j].second) is_s = true;
            if(mei == pr[j].first || mei == pr[j].second) is_t = true;
        }
        if(is_s && is_t){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}