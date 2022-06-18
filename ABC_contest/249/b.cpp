#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    string s; cin >> s;
    set<char> st;

    int n = (int)s.size();
    int cnt_upper = 0;
    int cnt_lower = 0;
    rep(i, n){
        if(st.count(s[i])){
            cout << "No" << endl;
            return 0;
        }
        if(isupper((int)s[i])) cnt_upper++;
        if(islower((int)s[i])) cnt_lower++;
        st.insert(s[i]);
    }
    if(cnt_upper != 0 && cnt_lower != 0){
        cout << "Yes" << endl;
    }else cout << "No" << endl;
    return 0;
}