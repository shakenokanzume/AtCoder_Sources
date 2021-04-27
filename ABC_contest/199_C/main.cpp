#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    int N, Q;
    string S;
    cin >> N >> S >> Q;
    string _s, s_;
    _s = S.substr(0, N);
    s_ = S.substr(N);

    rep(i, Q){
        int t, a, b;
        cin >> t >> a >> b;
        a--, b--;
        if(t == 2){
            _s.swap(s_);
        }else if(t == 1){
            // a, bが、N文字目を挟んで配置されているのか、どちらか一方に存在するのか
            if(b < N){
                swap(_s[a], _s[b]);
            }else if(a >= N){
                swap(s_[a-N], s_[b-N]);
            }else{
                swap(_s[a], s_[b-N]);
            }
        }else{
            continue;
        }
    }
    cout << _s << s_ << endl;
    return 0;
}