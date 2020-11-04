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
    int N;
    cin >> N;
    string s[N];
    rep(i, N) cin >> s[i];
    int M;
    cin >> M;
    string t[M];
    rep(i, M) cin >> t[i];
    map<string, int> mp;
    rep(i, N){
        mp[s[i]]++;
    }
    rep(i, M){
        mp[t[i]]--;
    }
    int mx = 0;
    for(auto p : mp){
        mx = max(mx, p.second);
    }
    cout << mx << endl;
    return 0;
}