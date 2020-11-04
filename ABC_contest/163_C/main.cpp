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
    int A[N];
    rep(i, N) cin >> A[i];
    int p[N] = {0};
    for(int i = 1; i < N; i++){
        p[A[i]-1]++;
    }
    rep(i, N) cout << p[i] << endl;
    return 0;
}