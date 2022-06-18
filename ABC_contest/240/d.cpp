#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    int n; cin >> n;
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    vector<pair<int, int>> pr;
    // 書かれている番号は2以上であるため、初回検出用に作成した、「書かれている番号が0の球が0個入っているという情報」
    pr.emplace_back(0, 0);
    int ans = 0;
    rep(i, n){
        if(a[i] == pr.back().first){
            pr.back().second++;
            ans++;
            // ボールが消える処理
            if(pr.back().first == pr.back().second){
                ans -= pr.back().second;
                pr.pop_back();
            }
        // 新加入の球が、前の球と番号が異なるとき
        }else{
            pr.emplace_back(a[i], 1);
            ans++;
        }
        cout << ans << endl;
    }
    return 0;
}