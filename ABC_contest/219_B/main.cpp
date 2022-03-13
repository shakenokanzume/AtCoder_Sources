#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    vector<string> st(3);
    rep(i, 3) cin >> st[i];

    string t;
    cin >> t;

    int len = (int)t.length();


    rep(i, len){
        int num = int(t[i] - '0' - 1);
        cout << st[num];
    }
    cout << endl;
    return 0;
}