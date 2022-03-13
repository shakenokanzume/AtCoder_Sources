#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)
#define repp(i, n) for(int i = 1; i < n; i++)
const int lim = 1000000007;

int main(){
    int N;
    cin >> N;
    set<vector<int>> st;
    rep(i, N){
        int l;
        cin >> l;
        vector<int> a(l);
        rep(j, l) cin >> a[j];
        st.insert(a);
    }
    cout << st.size() << endl;
    return 0;
}