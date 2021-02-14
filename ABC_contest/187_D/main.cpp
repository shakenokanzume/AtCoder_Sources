#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    ll N;
    cin >> N;
    ll A_sum = 0;
    ll ans = 0;
    // 各町の票数が差に与える変化量を格納する配列
    vector<ll> array(N);
    rep(i, N){
        ll a, b;
        cin >> a >> b;
        A_sum += a;
        array[i] = (a + a + b);
    }
    sort(array.begin(), array.end(), greater<ll>());

    rep(i, N){
        A_sum -= array[i];
        ans++;
        if(A_sum < 0){
            cout << ans << endl;
            return 0;
        }
    }
    
    cout << ans << endl;
    return 0;
}