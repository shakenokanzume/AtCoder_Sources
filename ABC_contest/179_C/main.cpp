#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    int N;
    cin >> N;
    int ans = 0;
    for(int i = 1; i < N; i++){
        int j = (N - 1) / i;
        ans += j;
    }
    cout << ans << endl;
    return 0;
}