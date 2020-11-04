#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    int N;
    cin >> N;
    vector<int> x(N), y(N);
    rep(i, N) cin >> x[i] >> y[i];

    rep(i, N){
        rep(j, N){
            if(i == j) continue;
            double vec_ij_x = x[j] - x[i];
            double vec_ij_y = y[j] - y[i];
            rep(k, N){
                if(i == k || j == k) continue;
                double vec_ik_x = x[k] - x[i];
                double vec_ik_y = y[k] - y[i];
                
                double x_b = vec_ij_x / vec_ik_x;
                double y_b = vec_ij_y / vec_ik_y;
                if((vec_ij_x * vec_ik_y) == (vec_ij_y * vec_ik_x)){
                    cout << "Yes" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "No" << endl;
    return 0;
}