#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(){
    int N, M;
    cin >> N >> M;
    //穴が空いている段にfalseを入れる
    vector<bool> is(N+1, true);
    //各段に行くまでの行き方の総数を格納
    vector<ll> dp(N+1, 0);
    rep(i, M){
        int a;
        cin >> a;
        is[a] = false;
    }

    int mod = pow(10, 9)+7;
    dp[0] = 1;
    //dp部分
    rep(i, N){
        for(int j = i+1; j <= min(i+2, N); j++){
            if(is[j]){
                dp[j] = (dp[j] + dp[i]) % mod;
            }
        }
    }
    cout << dp[N] << endl;
    return 0;
}