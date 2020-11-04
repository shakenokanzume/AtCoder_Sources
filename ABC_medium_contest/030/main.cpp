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
    ll N, M;
    cin >> N >> M;
    ll ans = 0;
    if(N >= 3 && M >= 3) ans = (N - 2) * (M - 2);
    else if(N == 2 || M == 2) ans = 0;
    else if(N == 1 || M == 1){
        ll a = min(N, M);
        ll b = max(N, M);
        ans = fabs(b - 2);
    }
    cout << ans << endl;
    return 0;

}