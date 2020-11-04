#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(){
    int N, X, T;
    cin >> N >> X >> T;
    int ans = 0;
    for(int i = 0; i < N; i += X){
        ans += T;
    }
    cout << ans << endl;
    return 0;
}