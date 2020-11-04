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
    map<ll, int> mp;
    rep(i, N){
        ll a;
        cin >> a;
        mp[a]++;
    }
    ll ans = 1;
    ll line_pair[2] = {0};
    rep(i, 2){
        for(auto p : mp){
            if(p.second >= 2) line_pair[i] = max(line_pair[i], p.first);
        }
        mp[line_pair[i]] -= 2;
    }
    cout << line_pair[0] * line_pair[1] << endl;
    return 0;
}