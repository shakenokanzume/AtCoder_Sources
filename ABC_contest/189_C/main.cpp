#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(){
    int N;
    cin >> N;
    vector<int> a(N);
    rep(i, N) cin >> a[i];

    // 食べられるみかんの最大値（求める解）
    int ans = 0;

    // 2重ループ開始
    rep(i, N){
        // [i, j]区間での最小値を格納する変数
        int mn = a[i];
        for(int j = i; j < N; j++){
            if(mn > a[j]) mn = a[j];
            ans = max(ans, mn * (j-i+1));
        }
    }
    cout << ans << endl;
    return 0;
}