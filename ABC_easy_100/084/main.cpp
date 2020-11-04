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
    ll A[N + 1], B[N];
    rep(i, N+1) cin >> A[i];
    rep(i, N) cin >> B[i];
    ll ans = 0;
    for(int i = 0; i < N; i++){
        ll left = min(A[i], B[i]);
        ans += left;
        A[i] -= left;
        B[i] -= left;

        ll right = min(A[i+1], B[i]);
        ans += right;
        A[i+1] -= right;
        B[i] -= right;
    }
    cout << ans << endl;
    return 0;
}