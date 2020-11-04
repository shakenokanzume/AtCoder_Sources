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
    ll A, B, C;
    cin >> A >> B >> C;
    ll K;
    cin >> K;
    ll mx = 0;
    if(K <= A){
        mx = K;
    }else if(A < K && K <= A + B){
        mx = A;
    }else{
        ll sub = K - (A + B);
        mx = A - sub;
    }
    cout << mx << endl;
    return 0;
}