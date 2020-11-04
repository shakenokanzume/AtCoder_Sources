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
 
ll func(ll num){
    return (ll)(num * (num - 1)) / 2;
}
 
int main(){
    int N;
    cin >> N;
    int A[N];
    rep(i, N) cin >> A[i];
    map<ll, ll> mp;
    rep(i, N) mp[A[i]]++;
    ll sum = 0;
    for(auto p : mp) sum += func(p.second);
    for(ll i = 0; i < N; i++){
        ll res = sum;
        ll value = mp[A[i]];
        res -= (value-1);
        cout << res << endl;
    }
    return 0;
}