#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    int N;
    ll K;
    cin >> N >> K;
    vector<ll> a(N);
    rep(i, N) cin >> a[i];

    //整数列に0が含まれる場合は、コーナーケースとして処理
    rep(i, N){
        if(a[i] == 0){
            cout << N << endl;
            return 0;
        }
    }

    //しゃくとり法開始
    int ans = 0;
    ll product = 1;
    int right = 0;
    for(int left = 0; left < N; left++){
        while(right < N && product * a[right] <= K){
            product *= a[right];
            right++;
        }

        ans = max(ans, right - left);

        if(left == right) right++;
        else product /= a[left];
    }
    cout << ans << endl;
    return 0;
}