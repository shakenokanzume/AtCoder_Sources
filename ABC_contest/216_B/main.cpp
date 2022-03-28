#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)
const int lim = 1000000007;

int main(){
    int N;
    cin >> N;
    vector<pair<string, string>> pr;
    rep(i, N){
        string s, t;
        cin >> s >> t;
        pr.emplace_back(s, t);
    }

    int cnt = 0;
    rep(i, N){
        for(int j = i+1; j < N; j++){
            if(pr[i].first == pr[j].first && pr[i].second == pr[j].second) cnt++;
        }
    }
    if(cnt == 0) cout << "No" << endl;
    else cout << "Yes" << endl;
    return 0;
}