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
    int a[N];
    rep(i, N) cin >> a[i];
    int cnt = 0;
    int sum = 1;
    while(sum < N){
        sum += (K-1);
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}