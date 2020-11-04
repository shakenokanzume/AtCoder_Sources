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
    ll Y;
    cin >> N >> Y;
    rep(i, N+1){
        rep(j, N+1){
            int k = N - (i + j);
            if(k < 0) break;
            ll x, y, z;
            x = i * 10000;
            y = j * 5000;
            z = k * 1000;
            ll sum = x + y + z;
            if(sum == Y){
                cout << i << " " << j << " " << k << endl;
                return 0;
            }
        }
    }
    cout << -1 << " " << -1 << " " << -1 << endl;
    return 0;
}