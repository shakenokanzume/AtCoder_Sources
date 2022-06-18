#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    ll N; cin >> N;
    // i*jで得られる平方数を全て格納しておく
    vector<ll> heihou(N);
    for(int i = 1; i <= N; i++) heihou[i-1] = i*i;

    ll ans = 0;
    // 各平方数を積で与えることができる整数の組(i, j)の数を求める
    for(auto p : heihou){
        for(int i = 1; i*i <= p; i++){
            if(p % i == 0 && p <= N * i && i <= N){
                if(i == (p/i)) ans++;
                else ans += 2;
            }
        }
    }
    cout << ans << endl;
    return 0;
}