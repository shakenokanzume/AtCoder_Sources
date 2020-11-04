#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(){
    int N, K;
    cin >> N >> K;
    vector<int> a(N);
    rep(i, N) cin >> a[i];
    //連続するK本のろうそくに火を付けるのが良いので、そのK本のろうそくの左端と右端の間の距離と、
    //原点から左端か右端に行くまでに必要な距離の小さいほうをたしたものの最小値を求めればよい
    vector<int> time(N-K+1);
    for(int i = 0; (i+K-1) < N; i++){
        int left = i;
        int right = i+K-1;
        //左端と右端との距離
        time[left] = a[right] - a[left];
        //原点から、左端または右端への距離（どちらか小さいほう）
        time[left] += min(fabs(a[left]), fabs(a[right]));
    }
    sort(time.begin(), time.end());
    int ans = time[0];

    cout << ans << endl;
    return 0;
}