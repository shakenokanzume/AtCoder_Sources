#include <iostream>
#include <stdio.h>
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
    double ans = 0;
    for(int i = 1; i <= N; i++){
        int k = 0;
        while(1){
            double a = i * powl(2, k);
            if(a >= K) break;
            else k++;
        }
        ans += (1.0/N) * powl(0.5, k);
    }
    printf("%.12f\n", ans);
    return 0;
}