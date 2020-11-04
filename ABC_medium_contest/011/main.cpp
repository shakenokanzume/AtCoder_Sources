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
    int N, M;
    cin >> N >> M;
    int a[N], b[N];
    int c[M], d[M];
    rep(i, N) cin >> a[i] >> b[i];
    rep(i, M) cin >> c[i] >> d[i];
    int near[N];
    rep(i, N){
        int min = pow(10, 8) * 4 + 1;
        rep(j, M){
            int len = abs(a[i] - c[j]) + abs(b[i] - d[j]);
            if(min > len){
                min = len;
                near[i] = j + 1;
            }
        }
    }
    rep(i, N) cout << near[i] << endl;
    return 0;
}