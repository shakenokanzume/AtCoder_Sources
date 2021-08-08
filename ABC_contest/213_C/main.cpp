#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)
const int lim = 1000000007;

int main(){
    int H, W, N;
    cin >> H >> W >> N;
    vector<pair<int, int>> pr_a, pr_b;
    for(int i = 1; i <= N; i++){
        int a, b;
        cin >> a >> b;
        pr_a.emplace_back(a, i);
        pr_b.emplace_back(b, i);
    }

    sort(pr_a.begin(), pr_a.end());
    sort(pr_b.begin(), pr_b.end());

    // i=1~Nまでの数字の書かれたカードが最終的に位置している場所を記録
    vector<pair<int, int>> pr(N+1);

    // 最終的に何行目になるのか
    int line = 1;
    pr[pr_a[0].second].first = line;
    for(int i = 1; i < N; i++){
        if(pr_a[i].first > pr_a[i-1].first) line++;
        pr[pr_a[i].second].first = line;
    }

    // 最終的に何列目になるのか
    int row = 1;
    pr[pr_b[0].second].second = row;
    for(int i = 1; i < N; i++){
        if(pr_b[i].first > pr_b[i-1].first) row++;
        pr[pr_b[i].second].second = row;
    }

    for(int i = 1; i <= N; i++){
        cout << pr[i].first << " " << pr[i].second << endl;
    }
    return 0;
}