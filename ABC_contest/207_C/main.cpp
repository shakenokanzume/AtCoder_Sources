#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)
const int lim = 1000000007;

int main(){
    int N;
    cin >> N;
    // 区間を格納する配列（[first, second]の区間として格納）
    vector<pair<double, double>> pr;
    // 入力
    rep(i, N){
        int t;
        double l, r;
        cin >> t >> l >> r;
        switch(t){
            case 1:
            pr.emplace_back(l, r);
            break;
            case 2:
            pr.emplace_back(l, r-0.5);
            break;
            case 3:
            pr.emplace_back(l+0.5, r);
            break;
            case 4:
            pr.emplace_back(l+0.5, r-0.5);
            break;
        }
    }

    int ans = 0;
    // 区間開始の値についてソートする（昇順）
    sort(pr.begin(), pr.end());
    // 区間開始の値について昇順ソートしたので、共通区間があるときは、i < j として、
    // pr[i].second >= pr[j].first が成立している
    rep(i, N){
        for(int j = i+1; j < N; j++){
            if(pr[i].second >= pr[j].first) ans++;
        }
    }
    
    cout << ans << endl;
    return 0;
}