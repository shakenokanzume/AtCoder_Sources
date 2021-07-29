#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(){
    string s;
    cin >> s;
    reverse(s.begin(), s.end());
    rep(i, (int)s.size()){
        if(s[i] == '6') s[i] = '9';
        else if(s[i] == '9'){
            s[i] = '6';
        }
    }
    cout << s << endl;
    return 0;
}