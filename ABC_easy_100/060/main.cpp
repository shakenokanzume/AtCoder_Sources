#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(){
    int N;
    cin >> N;
    int T[N];
    int sum_time = 0;
    rep(i, N){
        cin >> T[i];
        sum_time += T[i];
    }
    int M;
    cin >> M;
    int P[M], X[M];
    int result[M];
    rep(i, M){
        cin >> P[i] >> X[i];
        int sub = T[P[i]-1] - X[i];
        result[i] = sum_time - sub;
    }
    rep(i, M) cout << result[i] << endl;
    return 0;
}