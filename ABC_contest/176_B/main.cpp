#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(){
    string s;
    cin >> s;
    int len = (int)s.size();
    int val = 0;
    rep(i, len){
        val += (s[i] - '0');
    }
    if(val % 9 == 0) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}