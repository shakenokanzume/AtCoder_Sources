#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)
#define repp(i, n) for(int i = 1; i < n; i++)
const int lim = 1000000007;

int main(){
    string s, t;
    cin >> s >> t;
    int N = (int)s.size();
    rep(i, 26){
        string r = s;
        rep(j, N){
            r[j] = 'a' + (r[j] + i) % 26;
        }
        if(r == t){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}