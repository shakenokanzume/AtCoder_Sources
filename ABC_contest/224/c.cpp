#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)
#define repp(i, n) for(int i = 1; i < n; i++)
const int lim = 1000000007;

int main(){
    int N;
    cin >> N;
    vector<int64_t> x(N), y(N);
    rep(i, N) cin >> x[i] >> y[i];
    int64_t mn_x = lim;
    int64_t mn_y = lim;
    
    int ans = 0;
    rep(i, N){
        for(int j = i+1; j < N; j++){
            for(int k = j+1; k < N; k++){
                int64_t vec_ij_x = x[j] - x[i];
                int64_t vec_ij_y = y[j] - y[i];
                int64_t vec_ik_x = x[k] - x[i];
                int64_t vec_ik_y = y[k] - y[i];
                if((vec_ij_y * vec_ik_x) != (vec_ik_y * vec_ij_x)) ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}