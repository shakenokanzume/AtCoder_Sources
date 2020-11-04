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
    int B[N-1];
    rep(i, N-1) cin >> B[i];
    int C[N];
    for(int i = 0; i < N; i++){
        if(i == 0){
            C[0] = B[0];
            continue;
        }
        if(i == N-1){
            C[N-1] = B[N-2];
            break;
        }
        C[i] = min(B[i-1], B[i]);
    }
    int sum = 0;
    rep(i, N){
        sum += C[i];
    }
    cout << sum << endl;
    return 0;
}