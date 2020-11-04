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
    if(2 * N > M){
        ans = ll(M / 2);
    }else{
        ans = N;
        ll rest = M - 2 * N;
        ans += ll(rest / 4);
    }
    cout << ans << endl;
    return 0;
}