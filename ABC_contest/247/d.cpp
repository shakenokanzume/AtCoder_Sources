#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    int q; cin >> q;
    deque<pair<ll, ll>> deq;

    rep(i, q){
        int n; cin >> n;
        if(n == 1){
            ll x, c; cin >> x >> c;
            deq.push_back(make_pair(x, c));
        }else if(n == 2){
            ll c; cin >> c;
            ll ans = 0;
            while(c > 0){
                ll mn = min(deq.front().second, c);
                ans += deq.front().first * mn;
                deq.front().second -= mn;
                c -= mn;
                if(deq.front().second <= 0) deq.pop_front();
            }
            cout << ans << endl;
        }
    }
    return 0;
}