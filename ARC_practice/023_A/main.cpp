#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

// 問題の公式
int func(int y, int m, int d){
    int ans = 365 * y + (y/4) - (y / 100) + (y / 400) + (306 * (m+1)) / 10 + d - 429;
    return ans;
}

int main(){
    int y, m, d;
    cin >> y >> m >> d;

    // 1月と2月の場合の処理
    if(m == 1 || m == 2){
        y--;
        m += 12;
    }

    int ans = func(2014, 5, 17) - func(y, m, d);
    cout << ans << endl;
    return 0;
}