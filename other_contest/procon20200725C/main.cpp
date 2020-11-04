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
    int N, K;
    cin >> N >> K;
    vector<int> a(N+1, 0);
    for(int i = 1; i < N+1; i++) cin >> a[i];
    for(int i = K+1; i <= N; i++){
        if(a[i-K] < a[i]) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}