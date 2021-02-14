#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    int N;
    cin >> N;
    vector<int> x(N), y(N);
    rep(i, N){
        cin >> x[i] >> y[i];
    }

    int ans = 0;
    rep(i, N){
        for(int j = i + 1; j < N; j++){
            double tan = (double)(y[j] - y[i]) / (x[j] - x[i]);
            if(tan >= -1 && tan <= 1) ans++;
        }
    }
    cout << ans << endl;
    return 0;
}