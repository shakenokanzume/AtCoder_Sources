#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(){
    ll a, b, x;
    cin >> a >> b >> x;
    ll ans = 0;
    //一般に、1~Nまでを考えた時、その範囲内にxで割り切れる物の数がいくつ存在するかという問題は、
    //1~Nまでの範囲にxの約数がいくつ存在するかという質問に等しいため、a以上b以下の範囲でこれを考えると、
    //1~bまででxで割り切れる物の個数（b/x)から、1~(a-1)まででxで割り切れる物の個数を引いてやればよい
    //今回は、a, bの指定が、0<=a<=b<=1e18なので、a==0の場合の挙動を別で考えなければならない。

    //a==0の時の挙動（a-1が-1になってしまうため、コーナーケースとして処理）
    if(a == 0){
        ll val1 = b/x;
        ans = val1 + 1;
    }else{
        ll val1 = b/x;
        ll val2 = (a-1)/x;
        ans = val1 - val2;
    }
    cout << ans << endl;
    return 0;
}