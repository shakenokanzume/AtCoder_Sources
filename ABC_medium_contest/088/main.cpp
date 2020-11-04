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

ll func(ll num){
    if(num == 0) return 0;
    else if(num <= 6) return 1;
    else return 2;
}

int main(){
    ll x;
    cin >> x;
    ll a, b;
    a = x / 11;
    b = x % 11;
    ll ans = a * 2 + func(b);
    cout << ans << endl;
    return 0;
}