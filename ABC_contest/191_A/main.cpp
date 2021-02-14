#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    int v, t, s, d;
    cin >> v >> t >> s >> d;

    if(v * t <= d && d <= v * s) cout << "No" << endl;
    else cout << "Yes" << endl;

    return 0;
}