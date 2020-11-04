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
    int n;
    cin >> n;
    vector<ll> a(n);
    //全体の和と、a[i]の入力
    ll all_sum = 0;
    rep(i, n){
        cin >> a[i];
        all_sum += a[i];
    }
    ll mn = 1000000000000110;
    ll x = 0;
    ll y = 0;
    rep(i, n-1){
        x += a[i];
        y = all_sum - x;
        if(mn > fabs(x - y)) mn = fabs(x - y);
    }
    cout << mn << endl;
    return 0;
}