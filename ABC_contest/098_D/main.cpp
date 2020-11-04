#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    int N;
    cin >> N;
    vector<int> a(N);
    rep(i, N) cin >> a[i];

    ll ans = 0;
    //今回xor和をとっておく変数は必要ない
    //なぜなら、xor_sum == sumとなる条件下でright++するのだから、ある区間[left, right)をチェックしている時には
    //必ずxor_sum == sumとなっているからである。leftを右に移動する時の処理も、sum-=a[left]でよい。
    ll sum = 0;
    int right = 0;
    for(int left = 0; left < N; left++){
        //xor和と加算和が一致するときのみright++;
        while(right < N && ((sum ^ a[right]) == (sum + a[right]))){
            sum += a[right];
            right++;
        }

        ans += (right - left);

        //a[left]を除く操作は、sumにだけ行えば、xor_sum（作ってはいない）も行われたことになる。
        //23行目のwhile()条件式でsumしか使わないため
        if(right == left) right++;
        else sum -= a[left];
    }
    cout << ans << endl;
    return 0;
}