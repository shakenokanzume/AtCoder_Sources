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
    ll L[M], R[M];
    rep(i, M){
        cin >> L[i] >> R[i];
    }
    ll maxL = 1;
    ll minR = N;
    rep(i, M){
        maxL = max(maxL, L[i]);
        minR = min(minR, R[i]);
    }

    ll ans = minR - maxL + 1;
    ans = max((ll)0, ans);
    cout << ans << endl;

    return 0;
}