#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)
#define repp(i, n) for(int i = 1; i < n; i++)
const int lim = 1000000007;

int main(){
    int l, r;
    cin >> l >> r;
    l--, r--;
    string s;
    cin >> s;
    int len = r - l + 1;
    rep(i, len / 2){
        char temp;
        temp = s[l+i];
        s[l+i] = s[r-i];
        s[r-i] = temp;
    }
    cout << s << endl;
    return 0;
}