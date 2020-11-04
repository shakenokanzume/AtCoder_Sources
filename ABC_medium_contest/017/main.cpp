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
    ll T;
    cin >> N >> T;
    ll t[N];
    rep(i, N) cin >> t[i];
    ll sum = 0;
    rep(i, N-1){
        sum += min(T, t[i+1] - t[i]);
    }
    sum += T;
    cout << sum << endl;
    return 0;
}