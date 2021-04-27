#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    int N;
    cin >> N;
    vector<int> a(N), b(N);
    rep(i, N) cin >> a[i];
    rep(i, N) cin >> b[i];

    // 各整数が何回条件を満たしたかを格納
    vector<int> num(1005, 0);
    rep(i, N){
        for(int j = a[i]; j <= b[i]; j++){
            num[j]++;
        }
    }

    int ans = 0;
    rep(i, 1001){
        if(num[i] == N) ans++;
    }
    cout << ans << endl;
    return 0;
}