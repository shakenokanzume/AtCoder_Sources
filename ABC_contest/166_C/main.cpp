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
    ll h[N];
    int A[M], B[M];
    rep(i, N) cin >> h[i];
    rep(i, M) cin >> A[i] >> B[i];
    bool high[N];
    rep(i, N) high[i] = true;
    rep(i, M){
        if(h[A[i]-1] > h[B[i]-1]){
            high[B[i]-1] = false;
        }else if(h[A[i]-1] < h[B[i]-1]){
            high[A[i]-1] = false;
        }else{
            high[A[i]-1] = high[B[i]-1] = false;
        }
    }
    int cnt = 0;
    rep(i, N){
        if(high[i]){
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}