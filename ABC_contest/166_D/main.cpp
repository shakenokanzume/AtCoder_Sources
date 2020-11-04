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
    ll X;
    cin >> X;
    ll lim = pow(10, 3); //A, Bの探索範囲の上限値を1000とする。
    for(ll B = -lim; B <= lim; B++){ //Bを-1000~1000までで探索
        for(ll A = B + 1; A <= lim; A++){ //AをB+1 ~ 1000までで探索
            ll ans = pow(A, 5) - pow(B, 5);
            //Aが大きくなると、A^5も大きくなる（単調増加）であり、Bが固定された状態で
            //A^5が大きくなると、A^5-B^5は大きくなるので、Xを超えた場合はAの探索終了
            if(ans > X) break;
            else if(ans == X){
                cout << A << " " << B << endl;
                return 0;
            }
        }
    }
    cout << -1 << endl;
    return 0;
}