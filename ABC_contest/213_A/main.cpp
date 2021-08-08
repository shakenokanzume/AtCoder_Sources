#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)
const int lim = 1000000007;

int main(){
    int a, b;
    cin >> a >> b;
    rep(c, 256){
        if((a & (~c) | (~a) & c)== b){
            cout << c << endl;
        }
    }
    return 0;
}