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

int func(int num){
    int cnt = 1;
    while(num / 10 != 0){
        cnt++;
        num /= 10;
    }
    return cnt;
}

int main(){
    int N, M;
    cin >> N >> M;
    int s[M], c[M];
    rep(i, M) cin >> s[i] >> c[i];
    int d[M];
    rep(i, M) d[i] = N - s[i] + 1;

    int ans = 1001;
    rep(i, 10){
        rep(j, 10){
            rep(k, 10){
                bool is = true;
                int num = i * 100 + j * 10 + k;
                int n[] = {k, j, i};
                if(func(num) != N) is = false;
                rep(itr, M){
                    if(n[d[itr]-1] != c[itr]) is = false;
                }
                if(is) ans = min(ans, num);
            }
        }
    }
    if(ans == 1001) cout << -1 << endl;
    else cout << ans << endl;
    return 0;
}