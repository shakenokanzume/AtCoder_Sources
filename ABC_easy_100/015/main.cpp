#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
using namespace std;

#define rep(i, n) for(int i = 0; i < n; i++)

int main(){
    long long N;
    cin >> N;
    long long d[N];
    rep(i, N){
        cin >> d[i];
    }

    sort(d, d + N);
    int K_range = d[N / 2] - d[(N / 2 - 1)];

    cout << K_range << endl;

    return 0;
}