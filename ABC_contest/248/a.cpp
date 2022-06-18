#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    string s; cin >> s;
    set<int> st;
    rep(i, (int)s.size()){
        st.insert(s[i] - '0');
    }
    rep(i, 10){
        if(!st.count(i)){
            cout << i << endl;
            return 0;
        }
    }
}