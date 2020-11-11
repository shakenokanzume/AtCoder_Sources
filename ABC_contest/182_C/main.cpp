#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int keta(ll num){
    int keta = 0;
    while(num != 0){
        num /= 10;
        keta++;
    }
    return keta;
}

int main(){
    ll N;
    cin >> N;

    //Nの桁数取得
    int k = keta(N);
    //Nの各桁を配列の各変数に格納
    vector<int> a(k);
    //インデックスの小さいほうに下位の桁を格納している(a[0]に1桁目)
    for(int i = 0; i < k; i++){
        a[i] = (N%10);
        N/=10;
    }

    //答えの格納変数（答えがkを超えることはないので、そのような値で初期化）
    int ans = k + 10;

    //bit全探索
    for(ll bit = 0; bit < (1<<k); bit++){
        //残った桁の合計を格納
        ll sub = 0;
        rep(i, k){
            if(bit & (1<<i)){
                sub += a[i];
            }
        }
        //subが0でなく、かつ3の倍数であれば、その時の消した桁数を格納
        if(sub != 0 && sub % 3 == 0){
            int cnt = 0;
            rep(i, k){
                if(!(bit & (1<<i))) cnt++;
            }
            ans = min(ans, cnt);
        }
    }
    if(ans == k+10) cout << -1 << endl;
    else cout << ans << endl;
    return 0;
}