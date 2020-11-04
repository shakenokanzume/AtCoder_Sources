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

ll func(ll a, ll b){
    if(b == 0) return a;
    else return func(b, a % b);
}

int main(){
    int N;
    cin >> N;
    vector<ll> a(N);
    rep(i, N) cin >> a[i];
    
    ll ans = a[0];  //最初は、最大公約数をa[0]として初期化
    rep(i, N){
        ans = func(ans, a[i]);  //すべてのa[i]と最大公約数を取る
    }
    cout << ans << endl;
    return 0;
}