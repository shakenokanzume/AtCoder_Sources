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
    ll a[N];
    rep(i, N) cin >> a[i];
    int cnt_t = 0;
    int cnt_f = 0;
    rep(i, N){
        if(a[i] % 4 == 0) cnt_f++;
        else if(a[i] % 2 == 0) cnt_t++;
    }
    if(cnt_t >= 2) cnt_t -= 1;
    else cnt_t = 0;
    int ans = 2 * cnt_f + cnt_t;
    if(ans >= N-1) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}