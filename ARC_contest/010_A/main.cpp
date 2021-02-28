#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    int N, M, A, B;
    cin >> N >> M >> A >> B;
    vector<int> c(M);
    rep(i, M) cin >> c[i];

    rep(i, M){
        if(N <= A) N += B;

        N -= c[i];

        if(N < 0){
            cout << i+1 << endl;
            return 0;
        }
    }
    cout << "complete" << endl;
    return 0;
}