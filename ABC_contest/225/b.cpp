#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)
#define repp(i, n) for(int i = 1; i < n; i++)
const int lim = 1000000007;

int main(){
    int N;
    cin >> N;
    vector<vector<int>> bridge(N);
    rep(i, N-1){
        int a, b;
        cin >> a >> b;
        a--, b--;
        bridge[a].push_back(b);
        bridge[b].push_back(a);
    }
    int cnt = 0;
    rep(i, N){
        if(bridge[i].size() == (N-1)) cnt++;
    }
    if(cnt == 1) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}