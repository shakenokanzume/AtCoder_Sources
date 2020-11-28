#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    int N, X;
    cin >> N >> X;
    string s;
    cin >> s;

    int ans = X;
    rep(i, N){
        if(s[i] == 'o') ans++;
        if(s[i] == 'x') ans = max(0, ans-1);
    }
    cout << ans << endl;
    return 0;
}