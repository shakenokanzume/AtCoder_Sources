#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    int N;
    cin >> N;
    // 先頭に!がつく文字列を格納
    vector<string> s;
    // 先頭に!がつかない文字列を格納
    set<string> st;
    rep(i, N){
        string S;
        cin >> S;
        if(S[0] == '!'){
            s.push_back(S);
        }else{
            st.insert(S);
        }
    }
    rep(i, (int)s.size()){
        string t = s[i].substr(1);
        if(st.count(t) != 0){
            cout << t << endl;
            return 0;
        }
    }
    cout << "satisfiable" << endl;
    return 0;
}