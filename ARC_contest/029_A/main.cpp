#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    int N;
    cin >> N;
    vector<int> a(N);
    rep(i, N) cin >> a[i];

    int ans = 1000;
    for(int bit = 0; bit < (1 << N); bit++){
        int sum1 = 0, sum2 = 0;
        for(int i = 0; i < N; i++){
            if(bit & (1 << i)) sum1 += a[i];
            else sum2 += a[i];
        }
        if(ans > max(sum1, sum2)){
            ans = max(sum1, sum2);
        }
    }
    cout << ans << endl;
    return 0;

}