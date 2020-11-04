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
    int ans = 0;
    for(auto p : mp){
        if(p.second >= p.first){
            ans += (p.second - p.first);
        }else{
            ans += p.second;
        }
    }
    cout << ans << endl;
    return 0;
}