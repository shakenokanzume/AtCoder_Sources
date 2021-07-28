#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    double A, B;
    cin >> A >> B;
    double ans = (A - B) / 3 + B;
    cout << ans << endl;
    return 0;
}