#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
#include <vector>
using namespace std;

#define rep(i, n) for(int i = 0; i < n; i++)

int main(){
    int N;
    cin >> N;
    vector<int> v(N);
    rep(i, N){
        cin >> v[i];
    }
    sort(v.begin(), v.end());

    double ans = v[0];
    for(int i = 1; i < N; i++){
        ans = (ans + v[i]) / 2;
    }

    cout << ans << endl;

    return 0;
}