#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    double txa, tya, txb, tyb;
    double t, v, n;
    cin >> txa >> tya >> txb >> tyb >> t >> v >> n;
    vector<pair<double, double>> pr;
    rep(i, n){
        double a, b;
        cin >> a >> b;
        pr.emplace_back(a, b);
    }

    // 動ける距離
    double mx_len = t * v;

    rep(i, n){
        double gx, gy;
        gx = pr[i].first, gy = pr[i].second;
        double len1x = txa - gx;
        double len1y = tya - gy;
        double len1 = sqrt(len1x * len1x + len1y * len1y);

        double len2x = txb - gx;
        double len2y = tyb - gy;
        double len2 = sqrt(len2x * len2x + len2y * len2y);
        
        double len = len1 + len2;
        if(len <= mx_len){
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}