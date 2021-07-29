#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(){
    int N;
    cin >> N;
    map<int, string> mp;
    rep(i, N){
        string s;
        int t;
        cin >> s >> t;
        mp[t] = s;
    }

    cout << prev(mp.end(), 2)->second << endl;
    return 0;
}