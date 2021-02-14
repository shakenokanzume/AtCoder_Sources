#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    int N, M;
    cin >> N >> M;
    vector<pair<int, int>> pr(M);
    rep(i, M){
        int a, b;
        cin >> a >> b;
        pr[i] = make_pair(a, b);
    }

    // 右端側が小さい順で並べる
    sort(pr.begin(), pr.end(), [](pair<int, int> a, pair<int, int> b){return a.second < b.second;});

    // 一番最近に接続を断ち切った区間の左端側の値を格納]
    // 初期値は十分小さい値とする
    int left = -10;
    // 断ち切らねばならなかった区間の数
    int ans = 0;
    rep(i, M){
        // 最も最近断ち切った区間の左端よりも、今見ている区間の左端が大きければ、今見ている区間の中で1つの区間を切る
        if(pr[i].first > left){
            ans++;
            left = pr[i].second-1;
        }
    }
    cout << ans << endl;
    return 0;
}