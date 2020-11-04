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

ll f(ll x){
    if(x == 1) return 1;
    return f(x / 2)* 2 + 1;
}

int main(){
    ll H;
    cin >> H;
    cout << f(H) << endl;
    return 0;
}

