#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    int H, W;
    cin >> H >> W;
    vector<vector<int>> A(H, vector<int>(W));
    int min = 10000;
    rep(i, H){
        rep(j, W){
            cin >> A[i][j];
            if(min > A[i][j]){
                min = A[i][j];
            }
        }
    }
    ll ans = 0;
    rep(i, H){
        rep(j, W){
            ans += (A[i][j] - min);
        }
    }
    cout << ans << endl;
    return 0;
}