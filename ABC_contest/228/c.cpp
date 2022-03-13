#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)
#define repp(i, n) for(int i = 1; i < n; i++)
const int lim = 1000000007;

int main(){
    int N, K;
    cin >> N >> K;
    map<int, int, greater<int>> mp;
    vector<int> sumval(N);
    rep(i, N){
        int p1, p2, p3;
        cin >> p1 >> p2 >> p3;
        int sum = p1 + p2 + p3;
        sumval[i] = sum;
        mp[sum]++;
    }
    rep(i, N){
        int lastval = sumval[i] + 300;
        int rank = 1;
        for(auto p : mp){
            if(p.first <= lastval) break;
            rank += p.second;
        }
        if(rank <= K) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;

}