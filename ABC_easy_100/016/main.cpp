#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
using namespace std;
 
#define rep(i, n) for(int i = 0; i < n; i++)
 
int main(){
    int N;
    cin >> N;
    int A[N];
    rep(i, N){
        cin >> A[i];
    }
 
    int B[N];
    rep(i, N){
        B[A[i] - 1] = i + 1;
    }
 
    rep(i, N){
        cout << B[i] << endl;
    }
 
    return 0;
}