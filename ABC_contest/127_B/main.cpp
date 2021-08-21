#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    int r, d, x;
    cin >> r >> d >> x;
    rep(i, 10){
        int nx = r * x - d;
        x = nx;
        cout << nx << endl;
    }
    return 0;
}