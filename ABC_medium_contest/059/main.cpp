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
    vector<int> p(N);
    rep(i, N) cin >> p[i];
    int cnt = 0;
    int swap;
    rep(i, N){
        if((i + 1) == p[i]){
            cnt++;
            swap = p[i];
            p[i] = p[i+1];
            p[i+1] = swap;
        }
    }
    cout << cnt << endl;
    return 0;
}