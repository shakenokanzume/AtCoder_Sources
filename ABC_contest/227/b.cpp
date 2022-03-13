#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)
#define repp(i, n) for(int i = 1; i < n; i++)
const int lim = 1000000007;

int main(){
    int N;
    cin >> N;
    vector<int> s(N);
    rep(i, N) cin >> s[i];
    set<int> st;

    for(int a = 1; a <= 150; a++){
        for(int b = 1; b <= 150; b++){
            int val = 4*a*b + 3*a + 3*b;
            st.insert(val);
        }
    }

    int ans = 0;
    rep(i, N){
        if(!st.count(s[i])) ans++;
    }
    cout << ans << endl;
    return 0;
}