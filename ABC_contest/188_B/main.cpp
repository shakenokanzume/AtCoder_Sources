#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    int N;
    cin >> N;
    int sum = 0;
    vector<int> a(N), b(N);
    rep(i, N) cin >> a[i];
    rep(i, N) cin >> b[i];
    rep(i, N) sum += a[i] * b[i];
    if(sum == 0) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}