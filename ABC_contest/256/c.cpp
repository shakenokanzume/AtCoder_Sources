#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)
#define repp(i, n) for(int i = 1; i < n; i++)
const int lim = 1000000007;

int main(){
    int h1, h2, h3, w1, w2, w3; cin >> h1 >> h2 >> h3 >> w1 >> w2 >> w3;
    vector<int> h = {h1, h2, h3};
    vector<int> w = {w1, w2, w3};
    int ans = 0;
    // 3x3のマスのうち、左上の2x2を決めれば、条件を満たす3x3のマスは決定される
    for(int a11 = 1; a11 <= 28; a11++){
        for(int a12 = 1; a12 <= 28; a12++){
            for(int a21 = 1; a21 <= 28; a21++){
                for(int a22 = 1; a22 <= 28; a22++){
                    int a13 = h1 - (a11 + a12);
                    int a23 = h2 - (a21 + a22);
                    int a31 = w1 - (a11 + a21);
                    int a32 = w2 - (a12 + a22);
                    int a33 = h3 - (a31 + a32);
                    int a33_ = w3 - (a13 + a23);
                    if(a33 != a33_) continue;
                    vector<vector<int>> a = {{a11, a12, a13}, {a21, a22, a23}, {a31, a32, a33}};
                    bool is = true;
                    int sum = 0;
                    int sum_ = 0;
                    rep(i, 3) sum += a[2][i];
                    rep(i, 3) sum_ += a[i][2];
                    if(sum != h3 || sum_ != w3) is = false;
                    if(is) ans++;
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}