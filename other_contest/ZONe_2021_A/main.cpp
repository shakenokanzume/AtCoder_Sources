#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    string s;
    cin >> s;
    int N = (int)s.size();
    int ans = 0;
    rep(i, N-3){
        if(s[i] == 'Z'){
            string t = s.substr(i, 4);
            if(t == "ZONe"){
                ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}