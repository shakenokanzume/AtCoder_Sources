#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    int N, K;
    cin >> N >> K;
    vector<int> t(N);
    rep(i, N) cin >> t[i];

    rep(i, N-2){
        int sum = 0;
        for(int j = i; j < i+3; j++){
            sum += t[j];
        }
        if(sum < K){
            cout << i + 3 << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}