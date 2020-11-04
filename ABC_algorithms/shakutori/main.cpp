#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    int N, Q;
    cin >> N >> Q;
    //整数列を入力
    vector<ll> a(N);
    rep(i, N) cin >> a[i];

    //各クエリ（各質問）に対するループ
    for(int i = 0; i < Q; i++){
        ll x;
        cin >> x;

        //各クエリに対する答えの格納
        ll ans = 0;

        //区間内の和を格納する変数
        ll sum = 0;
        //区間の開放最右端のインデックスを格納する配列
        //開放最右端なので、sumにa[right]の値は含まれない
        ll right = 0;
        //しゃくとり法開始
        //左端を設定するループ
        for(int left = 0; left < N; left++){
            //左端を固定して、sum <= xを満たすような右端のインデックスの最大値を見つけるループ
            //しゃくとり虫が延びる動作
            while(right < N && (sum + a[right] <= x)){
                sum += a[right];
                right++;
            }
            //決定された区間内に存在する区間の個数を数え上げる
            ans += (right - left);

            //a[right] >= xの場合に発生する。この時は、右端も左端も1つ右にずらす
            if(right == left) right++;
            else sum -= a[left]; //通常こちらが動作する。次のループに入る前に、sumから最左端の値を引いておく
        }
        cout << ans << endl;
    }
    return 0;
}