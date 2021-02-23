#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(){
    int K;
    cin >> K;

    ll ans = 0;

    // Aについて、[1, K]でループを行う
    for(int a = 1; a <= K; a++){
        // Bについて、A*B <= K の範囲内で、ループを行う
        for(int b = 1; a * b <= K; b++){
            ans += K / (a * b);
        }
    }
    cout << ans << endl;
    return 0;
}