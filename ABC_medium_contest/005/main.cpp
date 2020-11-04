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
    ll N;
    cin >> N;
    ll sum = 0;
    for(int i = 1; i < N; i++){
        sum += i;
    }
    cout << sum << endl;
    return 0;
}