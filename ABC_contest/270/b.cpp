#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)
#define repp(i, n) for(int i = 1; i < n; i++)
const int lim = 1000000007;

int main(){
    int x, y, z; cin >> x >> y >> z;
    // x>0に揃える
    if(x < 0){
        x*=-1;
        y*=-1;
        z*=-1;
    }
    // かべが意味ない時
    if((y < 0) || (y > x)){
        cout << x << endl;
    }else{
        if(z < 0) cout << abs(z)*2 + x << endl;
        else{
            if(z < y) cout << x << endl;
            else cout << -1 << endl;
        }
    }
    return 0;
}