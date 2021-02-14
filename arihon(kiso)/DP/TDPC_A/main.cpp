#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    int N;
    cin >> N;
    vector<int> p(N);
    rep(i, N) cin >> p[i];

    // 0~100*N点までのすべての得点の出現状況をdpによって格納する
    vector<int> dp(N * 100 + 1, 0);
    dp[0] = 1;

    rep(i, N){
        queue<int> que;
        // 各p[i]を足す動作
        rep(j, N * 100 + 1){
            // ある時点までで和としてありうる値のdp[]にアクセスして、その値をqueに格納
            // 足し算を行うもとになりうる値をqueに格納
            if(dp[j] == 1 && j + p[i] <= N * 100 + 1){
                que.push(j);
            }
        }
        // queに、ある時点までで和としてありえた値が入っているので、それにp[i]を足したものも、次の時点では和としてありうる
        while(!que.empty()){
            dp[que.front() + p[i]] = 1;
            que.pop();
        }
    }
    int cnt = 0;
    rep(i, N * 100 + 1){
        if(dp[i] == 1) cnt++;
    }
    cout << cnt << endl;
    return 0;
}