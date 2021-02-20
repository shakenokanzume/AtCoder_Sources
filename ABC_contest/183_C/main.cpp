#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for (int i = 0; i < n; i++)

const int lim = 1000000007;

int main()
{
    int N, K;
    cin >> N >> K;
    vector<vector<int>> t(N, vector<int>(N));
    rep(i, N) rep(j, N) cin >> t[i][j];
    // 都市を移動する順番を示す配列
    vector<int> a(N);
    rep(i, N) a[i] = i;

    // 条件を満たすような都市の回り方がいくつあるかを格納する変数
    int ans = 0;

    // next_permutationによるループ処理開始
    do
    {
        // 今見ている経路での総コストを格納するための変数
        int sum = 0;
        // 配列aに格納されている、隣り合う都市間のコストを見るループ
        rep(i, N)
        {
            sum += t[a[i]][a[(i+1)%N]];
        }

        if (sum == K)
        {
            ans++;
        }

    } while (next_permutation(a.begin()+1, a.end()));

    cout << ans << endl;
    return 0;
}
