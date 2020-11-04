#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <queue>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

using Graph = vector<vector<int>>;

int main(){
    int N, M;
    cin >> N >> M;
    Graph G(N);
    rep(i, M){
        int a, b;
        cin >> a >> b;
        a--, b--;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    vector<int> dist(N, -1);
    vector<int> pre(N, -1);
    queue<int> q;

    dist[0] = 0;
    q.push(0);

    while(!q.empty()){
        int v = q.front();
        q.pop();
        for(int nv : G[v]){
            if(dist[nv] != -1) continue;
            dist[nv] = dist[v] + 1;
            pre[nv] = v;
            q.push(nv);
        }
    }

    cout << "Yes" << endl;
    rep(i, N){
        if(i == 0) continue;
        int ans = pre[i];
        ans++;
        cout << ans << endl;
    }
    return 0;
}