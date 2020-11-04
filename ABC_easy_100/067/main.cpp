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
    string S[N];
    rep(i, N) cin >> S[i];
    map<string, int> mp;
    rep(i, N){
        if(mp.count(S[i]) == 0){
            mp[S[i]] = 0;
        }
        mp[S[i]]++;
    }
    int mx = 0;
    for(auto p : mp) mx = max(mx, p.second);
    for(auto p : mp){
        if(p.second == mx) cout << p.first << endl;
        else continue;
    }
    return 0;
}