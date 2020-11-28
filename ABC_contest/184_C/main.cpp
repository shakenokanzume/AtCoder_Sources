#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

bool func(ll a, ll b, ll c, ll d){
    int cnt = 0;
    if(a + b == c + d) cnt++;
    if(a - b == c - d) cnt++;
    if(fabs(a - c) + fabs(b - d) <= 3) cnt++;
    if(cnt !=  0) return true;
    else return false;
}

int main(){
    ll r1, c1, r2, c2;
    cin >> r1 >> c1 >> r2 >> c2;

    // 答えとなる最小手数を格納
    int ans;
    //　座標の和の偶奇を見る（これがずれていると、3手目が必要な可能性がある）
    ll is_s = (r1 + c1) % 2;
    ll is_g = (r2 + c2) % 2;
    // ゴールとスタートが一致している場合
    if(r1 == r2 && c1 == c2){
        ans = 0;
        cout << ans << endl;
        return 0;
    }
    // 座標の和の偶奇が一致している場合
    if(is_s == is_g){
        if(func(r1, c1, r2, c2)) ans = 1;
        else ans = 2;
    }
    // 一致していない場合
    else{
        if(func(r1, c1, r2, c2)) ans = 1;
        // 一回目の移動で横または縦に移動してから、2回目の移動で斜め方向に移動し、ゴールに付けるかどうか
        else{
            bool is = false;
            for (int i = -3; i <= 3; i++)
            {
                for (int j = -3; j <= 3; j++)
                {
                    if (!(i == 0 || j == 0))
                        continue;
                    ll vr = r1 + i;
                    ll vc = c1 + j;
                    if (func(vr, vc, r2, c2))
                        is = true;
                }
            }
            if (is)
                ans = 2;
            else
                ans = 3;
        }
    }
    cout << ans << endl;
    return 0;
}