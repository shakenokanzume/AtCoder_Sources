#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
using namespace std;

#define rep(i, n) for(int i = 0; i < n; i++)

int main(){
    long long K, N;
    cin >> K >> N;

    long long A[N];
    for(int i = 0; i < N; i++){
        cin >> A[i];
    }

    long long B[N] = {0};
    for(long long i = 1; i < N; i++){
        B[i] = A[i] - A[i-1];
    }
    B[0] = K + A[0] - A[N-1];

    sort(B, B + N);

    cout << K - B[N-1] << endl;

    return 0;
    
}