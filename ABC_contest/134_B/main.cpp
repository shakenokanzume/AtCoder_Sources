#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(){
    int N, D;
    cin >> N >> D;

    int val = 2*D + 1;
    int ans = (N + val - 1) / val;
    cout << ans << endl;
    return 0;
}