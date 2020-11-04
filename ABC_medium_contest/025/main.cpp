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
    int a[N];
    rep(i, N) cin >> a[i];
    int cnt[N] = {0};
    rep(i, N){
        cnt[a[i]-1]++;
    }
    int cnt_ball = 0;
    rep(i, N) if(cnt[i] != 0) cnt_ball++;
    int ans = 0;
    if(cnt_ball > K){
        sort(cnt, cnt+N);
        int sub = cnt_ball - K;
        for(int i = (N-cnt_ball); i < N-K; i++){
            ans += cnt[i];
        }
    }
    cout << ans << endl;
    return 0;
}