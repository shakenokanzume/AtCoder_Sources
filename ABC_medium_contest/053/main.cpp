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
    vector<int> a(N+2, 0);
    for(int i = 1; i < N+1; i++){
        cin >> a[i];
    }
    ll sum = 0;
    rep(i, N+1){
        int v = abs(a[i]-a[i+1]);
        sum += (ll)v;
    }
    for(int i = 1; i < N+1; i++){
        ll ans = sum;
        int minus = abs(a[i-1] - a[i]) + abs(a[i] - a[i+1]);
        int pulse = abs(a[i-1] - a[i+1]);
        ans -= minus;
        ans += pulse;
        cout << ans << endl;
    }
    return 0;
}