#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)
#define repp(i, n) for(int i = 1; i < n; i++)
const int lim = 1000000007;

int main(){
    int n; cin >> n;
    vector<int> a(2e5+1, 0);
    rep(i, n){
        int l, r; cin >> l >> r;
        a[l]++;
        a[r]--;
    }
    int sum = 0;
    int l, r;
    for(int i = 1; i <= 2e5; i++){
        if(sum == 0 && a[i] >= 1) l = i;
        sum += a[i];
        if (sum == 0 && a[i] < 0)
        {
            r = i;
            cout << l << " " << r << endl;
        }
    }
    return 0;
}