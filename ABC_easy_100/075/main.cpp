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
    int N, K;
    cin >> N >> K;
    ll h[N];
    rep(i, N) cin >> h[i];
    ll sub_min = pow(10, 9);
    sort(h, h + N);
    for(int i = 0; i + K <= N; i++){
        ll sub = h[i + K - 1] - h[i];
        sub_min = min(sub_min, sub);
    }
    cout << sub_min << endl;
    return 0;
}