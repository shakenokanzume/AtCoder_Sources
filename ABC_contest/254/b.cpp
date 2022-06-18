#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    int N; cin >> N;
    vector<vector<int>> a(N);

    rep(i, N){
        a[i].resize(i+1);
        rep(j, i+1){
            if(j == 0 || i == j){
                a[i][j] = 1;
            }else{
                a[i][j] = a[i-1][j-1] + a[i-1][j];
            }
        }
    }
    rep(i, N){
        rep(j, (int)a[i].size()) cout << a[i][j] << " ";
        cout << endl;
    }
    return 0;
}