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
    ll N, K, Q;
    cin >> N >> K >> Q;
    ll A[Q];
    ll p[N];
    rep(i, N) p[i] = K - Q;
    rep(i, Q){
        cin >> A[i];
        p[A[i] - 1]++;
    }
    rep(i, N){
        if(p[i] > 0) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}