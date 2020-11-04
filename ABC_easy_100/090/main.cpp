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
    ll ans = 1;
    ll a = (ll)(pow(10, 9) + 7);
    for(int i = 1; i <= N; i++){
        ans *= i;
        ans %= a;
    }
    cout << ans << endl;
    return 0;
}