#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int factorial(int a){
    if(a == 0) return 1;
    else return a * factorial(a-1);
}

int main(){
    ll P;
    cin >> P;
    ll cnt = 0;
    for(int i = 10; i >= 1; i--){
        ll m = factorial(i);
        cnt += P / m;
        P -= (P / m) * m;
    }
    cout << cnt << endl;
    return 0;
}