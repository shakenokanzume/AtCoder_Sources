#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(){
    string S, T;
    cin >> S >> T;
    int N = (int)S.size();
    int ans = 0;
    rep(i, N){
        if(S[i] != T[i]) ans++;
    }
    cout << ans << endl;
    return 0;
}