#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    int N;
    cin >> N;
    int ans = lim;
    for(int row = 1; row <= N; row++){
        int line = N / row;
        int rem = N % row;
        int val = abs(line - row) + rem;
        ans = min(ans, val);
    }
    cout << ans << endl;
    return 0;
}