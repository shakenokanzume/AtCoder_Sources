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

int func(ll num){
    int count = 0;
    while(num % 2 == 0){
        num /= 2;
        count++;
    }
    return count;
}

int main(){
    int N;
    cin >> N;
    ll a[N];
    int sum = 0;
    rep(i, N){
        cin >> a[i];
        sum += func(a[i]);
    }
    cout << sum << endl;
    return 0;
}