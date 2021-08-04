#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)
const int lim = 1000000007;

int main(){
    int Q;
    cin >> Q;
    priority_queue<ll, vector<ll>, greater<ll>> que;

    rep(i, Q){
        int p;
        cin >> p;
        if(p == 1){
            ll x;
            cin >> x;
            que.push(x);
        }
        if(p == 2){
            ll x;
            cin >> x;
            vector<ll> array;
            while(!que.empty()){
                array.push_back(que.top() + x);
                que.pop();
            }
            for(ll p : array){
                que.push(p);
            }
        }
        if(p == 3){
            ll val = que.top();
            que.pop();
            cout << val << endl;
        }
    }
    return 0;
}