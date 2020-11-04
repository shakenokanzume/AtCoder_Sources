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
    ll A, B;
    ll V, W;
    ll T;
    cin >> A >> V;
    cin >> B >> W;
    cin >> T;

    bool is;
    if(A >= B) is = false;
    else{
        if(V <= W) is = false;
        else{
            ll d_sub = B - A;
            ll v_sub = V - W;
            if(d_sub % v_sub == 0){
                ll n = d_sub / v_sub;
                if(n >= 1 && n <= T) is = true;
                else is = false;
            }else{
                is = false;
            }
        }
    }
    if(is) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
