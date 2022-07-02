#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)
#define repp(i, n) for(int i = 1; i < n; i++)
const int lim = 1000000007;

int main(){
    int N; cin >> N;
    vector<int> a(N);
    int P = 0;
    rep(i, N) cin >> a[i];
    reverse(a.begin(), a.end());
    int sum = 0;
    rep(i, N){
        sum += a[i];
        if(sum > 4) P++;
    }
    cout << P << endl;
    return 0;
}