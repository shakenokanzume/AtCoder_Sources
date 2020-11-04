#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
using namespace std;

#define rep(i, n) for(int i = 0; i < n; i++)

int main(){
    long long N, K;
    cin >> N >> K;

    if(N > K){
        N = N % K;
    }

    cout << min(N, abs(N - K)) << endl;

    return 0;
}