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
    int t[N+ 1], x[N+1], y[N+1];
    t[0] = x[0] = y[0] = 0;
    for(int i = 1; i < N+1; i++) cin >> t[i] >> x[i] >> y[i];
    bool is_can = true;
    rep(i, N){
        int dt = t[i+1] - t[i];
        int dl = fabs(x[i+1] - x[i]) + fabs(y[i+1] - y[i]);
        if(dt < dl){
            is_can = false;
            break;
        }else if(dt > dl){
            if((dt - dl) % 2 != 0){
                is_can = false;
                break;
            }
        }
    }
    if(is_can) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}