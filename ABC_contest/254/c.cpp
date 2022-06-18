#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    int N, K; cin >> N >> K;
    vector<int> a(N);
    rep(i, N) cin >> a[i];
    vector<vector<int>> array(K);
    rep(i, N){
        array[i % K].push_back(a[i]);
    }
    rep(i, K) sort(array[i].begin(), array[i].end());

    vector<int> ans;

    for(int i = 0; i < ((N+K-1)/K); i++){
        rep(j, K){
            if(i >= array[j].size()) continue;
            ans.push_back(array[j][i]);
        }
    }

    if(is_sorted(ans.begin(), ans.end())) cout << "Yes" << endl;
    else cout << "No" << endl;
    
    return 0;
    
}