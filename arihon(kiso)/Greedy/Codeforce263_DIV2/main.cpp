#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    int N;
    cin >> N;
    // priority_queueを用いる
    priority_queue<int, vector<int>, greater<int> > que;
    // 2分割した後の、単独でないほうの数字の和を格納
    ll sum = 0;
    rep(i, N){
        int a;
        cin >> a;
        que.push(a);
        sum += a;
    }

    ll ans = sum;
    
    // 先頭（最も小さい数字）を取り出し、それを総和から引いた後、答えとなるansにsumとtを加算する
    while(que.size() > 1){
        int t = que.top();
        que.pop();
        sum -= t;
        ans += t;
        ans += sum;
    }
    cout << ans << endl;
    return 0;
}