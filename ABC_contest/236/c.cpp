#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)
#define repp(i, n) for(int i = 1; i < n; i++)
const int lim = 1000000007;

int main(){
    int n, m;
    cin >> n >> m;
    vector<string> s(n);
    set<string> t;
    rep(i, n) cin >> s[i];
    rep(i, m){
        string T; cin >> T;
        t.insert(T);
    }
    rep(i, n){
        if(t.count(s[i])){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }
    return 0;
}