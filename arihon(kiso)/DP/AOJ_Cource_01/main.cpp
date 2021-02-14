#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    int N, W;
    cin >> N >> W;
    vector<int> v(N), w(N);
    rep(i, N){
        cin >> v[i] >> w[i];
    }

    // 縦方向に選ぶ品物の番号、横方向に、選ぶ品物の合計重量の制限を取るDP配列を作成する
    vector<vector<int>> dp(N+1, vector<int>(W + 1));
    // 縦方向に対するループ（品物iを取るかどうか）
    rep(i, N){
        // 横方向に対するループ
        // sum_wは、合計重量の制限を表す
        rep(sum_w, W+1){

            // 番号iの品物を選ぶ時
            // dp[i+1][sum_w] : 番号iの商品を選んで、sum_wを超えない時の総価値
            // dp[i][sum_w-w[i]] + v[i] : 番号iの商品を選んで、sum_wからw[i]だけ上限値が減った状態における総価値に、v[i]をたしたもの
            if(sum_w - w[i] >= 0){
                dp[i + 1][sum_w] = max(dp[i + 1][sum_w], dp[i][sum_w - w[i]] + v[i]);
            }

            // 番号iの品物を選ばないとき
            // dp[i]の値を、同じだけの上限値を設けているdp[i+1][sum_w]に格納
            // 品物を選んでいないので、上限値に変更はない。
            dp[i+1][sum_w] = max(dp[i][sum_w], dp[i+1][sum_w]);
        }
    }
    cout << dp[N][W] << endl;
    return 0;
}