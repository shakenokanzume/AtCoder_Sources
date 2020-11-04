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
    int a[N];
    rep(i, N) cin >> a[i];
    int ans = 0;
    rep(i, N){
        ans += (a[i]-1);
    }
    cout << ans << endl;
    return 0;
}