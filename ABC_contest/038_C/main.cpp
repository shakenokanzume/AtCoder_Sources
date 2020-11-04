#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;
const int INF = 1000000000;

int main(){
    int N;
    cin >> N;
    vector<int> a(N);
    rep(i, N) cin >> a[i];

    ll ans = 0;
    //[0, 1)は必ず条件を満たすため
    //今回の単調増加の条件では、a[i]のみの範囲であれば必ずa[i]は単調増加と判断することから
    int right = 1;
    //しゃくとり法開始
    for(int left = 0; left < N; left++){
        //left == rightとなっている場合には、必ずright++したいため、right <= leftという条件が加わっている。
        //そうしないと、今回の問題のa[left]単独のみでも単調増加と判断される設定を考慮できないため
        while(right < N && (right <= left || a[right-1] < a[right])) right++;

        ans += (right - left);
    }
    cout << ans << endl;
    return 0;
}