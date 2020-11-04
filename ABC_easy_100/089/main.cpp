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
    ll X, Y;
    cin >> X >> Y;
    ll sum = 0;
    for(ll num = X; num <= Y; num *= 2){
        sum++;
    }
    cout << sum << endl;
    return 0;
}