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
    int A[M];
    rep(i, M) cin >> A[i];
    int sum = 0;
    rep(i, M) sum += A[i];
    if(sum > N) cout << -1 << endl;
    else cout << N - sum << endl;
    return 0;
}