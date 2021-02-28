#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    int X;
    cin >> X;

    int sum = 0;
    int mn = 361;
    rep(i, 360){
        sum += X;
        if(sum % 360 == 0) mn = min(mn, i+1);
    }
    cout << mn << endl;
    return 0;
}