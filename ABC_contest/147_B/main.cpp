#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(){
    string s;
    cin >> s;
    int N = (int)s.size();
    int ans = 0;
    rep(i, N/2){
        if(s[0+i] != s[N-1-i]) ans++;
    }
    cout << ans << endl;
    return 0;
}