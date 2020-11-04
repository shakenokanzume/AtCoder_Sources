#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    int N, M;
    vector<ll> H(N), W(M);
    rep(i, N) cin >> H[i];
    rep(i, M) cin >> W[i];

    priority_queue<ll, int> q;
    sort(H.begin(), H.end());
    ll ans = 0;

    rep(i, N-1){
        ll sub = H[i+1] - H[i];
        q.push(sub, int;
    }
    while(!q.empty()){
        pair<ll, pair<int, int>> val = q.top();


    }
    return 0;
}