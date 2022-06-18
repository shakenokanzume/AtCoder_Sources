#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    int n; cin >> n;
    vector<ll> a(n);
    rep(i, n) cin >> a[i];
    set<int> st;
    rep(i, n) st.insert(a[i]);
    sort(a.begin(), a.end());

    int ans = 0;
    rep(j, n){
        for(int i = j; i < n; i++){
            if(a[i] % a[j] == 0){
                int val = a[i] / a[j];
                if (st.count(val)){
                    ans++;
                    if(val != a[j]){
                        ans++;
                    }
                }
            }else continue;
        }
    }
    cout << ans << endl;
    return 0;
}