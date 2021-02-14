#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    rep(i, n) cin >> a[i];

    rep(i, n){
        if(x == a[i]) continue;
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}