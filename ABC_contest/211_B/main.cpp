#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    map<string, int> mp;
    rep(i, 4){
        string S;
        cin >> S;
        mp[S]++;
    }
    if(mp.size() == 4) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}