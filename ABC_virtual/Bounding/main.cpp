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
    int N, X;
    cin >> N >> X;
    int L[N];
    rep(i, N) cin >> L[i];
    int D[N + 1];
    D[0] = 0;
    int count = 1;
    for(int i = 1; i < N + 1; i++){
        D[i] = D[i - 1] + L[i - 1];
        if(D[i] <= X) count++;
        else break;
    }
    cout << count << endl;
    return 0;
}