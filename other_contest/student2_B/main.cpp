#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    int N, M;
    cin >> N >> M;

    vector<int> A(N), B(M);

    rep(i, N) cin >> A[i];
    rep(i, M) cin >> B[i];

    vector<int> cnt(1001, 0);

    rep(i, N) cnt[A[i]]++;
    rep(i, M) cnt[B[i]]++;

    for(int i = 1; i < 1001; i++){
        if(cnt[i] == 1) cout << i << " ";
    }
    cout << endl;
    return 0;
}