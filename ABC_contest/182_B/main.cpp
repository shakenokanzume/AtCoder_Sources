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

    int ans;
    int mx_cnt = 0;
    for(int k = 2; k <= 1000; k++){
        int cnt = 0;
        rep(i, N){
            if(a[i] % k == 0) cnt++;
        }
        if(mx_cnt < cnt){
            mx_cnt = cnt;
            ans = k;
        }
    }
    cout << ans << endl;
    return 0;
}