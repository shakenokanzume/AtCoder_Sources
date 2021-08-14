#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(){
    int N, K;
    cin >> N >> K;
    int ans = 0;
    
    // 階の番号（百の位）
    for(int i = 1; i <= N; i++){
        ans += (i * 100 * K);
    }

    // 部屋の番号（1の位）
    for(int i = 1; i <= K; i++){
        ans += i * N;
    }
    
    cout << ans << endl;
    return 0;
}