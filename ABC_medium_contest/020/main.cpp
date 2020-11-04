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
    int cnt = 0;
    for(auto p : mp){
        if(p.second % 2 == 1) cnt++;
    }
    cout << cnt << endl;
    return 0;
}