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

int kaijou(int num){
    if(num == 1){
        return 1;
    }else{
        return num * kaijou(num - 1);
    }
}

int main(){
    int N;
    cin >> N;
    int x[N], y[N];
    rep(i, N) cin >> x[i] >> y[i];
    vector<int> a(N);
    for(int i = 0; i < N; i++) a[i] = i + 1;
    double all_sum = 0;
    do{
        double sum = 0;
        rep(i, N-1){
            double x_len = (double)pow(x[a[i]-1] - x[a[i+1]-1], 2);
            double y_len = (double)pow(y[a[i]-1] - y[a[i+1]-1], 2);
            double length = sqrt(x_len + y_len);
            sum += length;
        }
        all_sum += sum;
    }while(next_permutation(a.begin(), a.end()));
    double ans = all_sum / kaijou(N);
    printf("%.7f\n", ans);
    return 0;
}