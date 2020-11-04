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

int func(int n){
    int ret = 0;
    while(n > 0){
        ret += n;
        n--;
    }
    return ret; 
}

int main(){
    int N, K;
    cin >> N >> K;
    int p[N+1];
    for(int i = 1; i < N+1; i++) cin >> p[i];
    double num[N+1];
    for(int i = 1; i < N+1; i++){
        num[i] = (double)func(p[i]);
        num[i] /= p[i];
    }
    double sum[N+1] = {0};
    for(int i = 1; i < N+1; i++) sum[i] = sum[i-1] + num[i];
    double ans = 0;
    for(int i = K; i <= N; i++){
        double m = sum[i] - sum[i-K];
        ans = max(ans, m); 
    }
    printf("%.7f\n", ans);
    return 0;
}