#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

// 各硬貨が何枚お釣りに含まれるか計算する関数
void func(int &ans, int &sub, int coin){
    if (sub / coin >= 1)
    {
        int cnt = sub / coin;
        ans += cnt;
        sub -= coin * cnt;
    }
}

int main(){
    int val;
    cin >> val;
    int money = 1000;
    // おつりの金額
    int sub = money - val;
    // 帰ってくるコインの枚数
    int ans = 0;

    // sub >= 500の場合
    func(ans, sub, 500);
    // sub >= 100の場合
    func(ans, sub, 100);
    // sub >= 50の場合
    func(ans, sub, 50);
    // sub >= 10の場合
    func(ans, sub, 10);
    // sub >= 5の場合
    func(ans, sub, 5);
    // sub >= 1の場合
    func(ans, sub, 1);
    cout << ans << endl;
    return 0;
}