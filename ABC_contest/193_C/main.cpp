#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

ll func(ll a, ll b){
    if(b == 0) return 1;
    ll ref = 1;
    rep(i, b){
        ref *= a;
    }
    return ref;
}

int main(){
    ll N;
    cin >> N;
    
    // a^bで表せる値をsetに格納
    set<ll> st;

    // 2~1e5までをaとして、a^bで表せる値をsetに格納
    for(ll a = 2; a * a <= N; a++){
        for(ll b = 2; func(a, b) <= N; b++){
            ll val = func(a, b);
            st.insert(val);
        }
    }

    cout << N - st.size() << endl;
    return 0;
}