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

bool isOK(ll num, ll key){
    if(num <= key) return true;
    else return false;
}

ll keta(ll num){
    int keta = 1;
    while(num / 10 != 0){
        keta++;
        num /= 10;
    }
    return keta;
}

int main(){
    ll A, B, X;
    cin >> A >> B >> X;

    ll ok = 0;
    ll ng = pow(10, 9)+1;

    while(fabs(ok - ng) > 1){
        ll mid = (ok + ng) / 2;
        ll val = A * mid + B * keta(mid);
        if(isOK(val, X)) ok = mid;
        else ng = mid;
    }
    cout << ok << endl;
    return 0;
}