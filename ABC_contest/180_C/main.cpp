#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    ll N;
    cin >> N;
    set<ll> a;

    for(ll i = 1; i * i <= N; i++){
        if(N % i == 0){
            a.insert(i);
            a.insert(N/i);
        }
    }
    for(auto p : a){
        cout << p << endl;
    }
    return 0;
}