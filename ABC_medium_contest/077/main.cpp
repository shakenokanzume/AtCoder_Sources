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
    ll N, M;
    cin >> N >> M;
    ll ans = (1900*M + 100*(N-M)) * pow(2, M);
    cout << ans << endl;
    return 0;
}