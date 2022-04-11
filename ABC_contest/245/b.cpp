#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    int n; cin >> n;
    vector<bool> num(2001, false);
    rep(i, n){
        int a; cin >> a;
        num[a] = true;
    }
    rep(i, 2001){
        if(!num[i]){
            cout << i << endl;
            return 0;
        }
    }
}