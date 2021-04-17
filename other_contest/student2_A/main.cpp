#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    int X, Y, Z;
    cin >> X >> Y >> Z;
    int ans = (Z * Y);
    if(ans % X == 0){
        ans = ans/X - 1;
    }else{
        ans = ans/X;
    }
    cout << ans << endl;
    return 0;

}