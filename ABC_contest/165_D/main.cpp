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

ll func(ll a, ll b, double x){
    ll ans = (ll)(a * x / b) - a * (ll)(x / b);
    return ans;
}

int main(){
    ll A, B, N;
    cin >> A >> B >> N;
    ll x = min(N, B-1); //f(x) = floor(Ax/B) - A*floor(x/B)を最大にするxを宣言
    //floorを%を用いて表した式をansに代入する。
    ll ans = (A * (x % B) - A * (x % B) % B) / B;
    cout << ans << endl;
    return 0;
}