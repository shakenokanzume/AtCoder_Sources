#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    int N;
    cin >> N;
    vector<int> p(N);
    rep(i, N) cin >> c[i];

    rep(i, N){
        for(int j = i+1; j < N; j++){
            int temp = p[i];
            p[i] = p[j];
            p[j] = temp;

            vector<int> q = p;
        }
    }
}