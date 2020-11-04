#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(){
    int N, D, X;
    cin >> N >> D >> X;
    int A[N];
    rep(i, N){
        cin >> A[i];
    }

    int eated = 0;
    for(int i = 0; i < D; i++){
        rep(j, N){
            if(i * A[j] + 1 <= D){
                eated++;
            }
        }
    }

    cout << eated + X << endl;

    return 0;
}