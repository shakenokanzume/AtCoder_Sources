#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    int N, K;
    cin >> N >> K;
    vector<pair<int, int>> p;

    for(int cd = 2; cd <= 2*N; cd++){
        if((cd + K <= 2*N) && (cd + K >= 2)){
            p.emplace_back(cd + K, cd);
        }
    }
    ll ans = 0;
    for(auto a : p){
        int a_cnt = 0, b_cnt = 0;
        
        ans += a_cnt * b_cnt;
    }
    cout << ans << endl;
    return 0;
}