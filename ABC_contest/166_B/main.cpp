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
    int N, K;
    cin >> N >> K;
    int d[K];
    int snk[N] = {0};
    for(int i = 0; i < K; i++){
        cin >> d[i];
        for(int j = 0; j < d[i]; j++){
            int a;
            cin >> a;
            snk[a - 1]++;
        }
    }
    int cnt = 0;
    rep(i, N){
        if(snk[i] == 0) cnt++;
    }
    cout << cnt << endl;
    return 0;
}