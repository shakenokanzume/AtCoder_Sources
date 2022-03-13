#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)
#define repp(i, n) for(int i = 1; i < n; i++)
const int lim = 1000000007;

int main(){
    int h, w;
    cin >> h >> w;
    vector<vector<int>> a(h, vector<int>(w));
    rep(i, h) rep(j, w) cin >> a[i][j];
    bool is = true;
    rep(i1, h){
        for(int i2 = i1 + 1; i2 < h; i2++){
            rep(j1, w){
                for(int j2 = j1 + 1; j2 < w; j2++){
                    int left = a[i1][j1] + a[i2][j2];
                    int right = a[i2][j1] + a[i1][j2];
                    if(left > right) is = false;
                }
            }
        }
    }
    if(is) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}