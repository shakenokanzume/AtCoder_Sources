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
    int X, N;
    cin >> X >> N;
    vector<int> p(N);
    rep(i, N) cin >> p[i];
    vector<bool> num(102);
    rep(i, 102) num[i] = false;
    rep(i, N){
        num[p[i]] = true;
    }
    int min_len = 100001;
    int min_index;
    rep(i, 102){
        if(num[i]) continue;
        else{
            if(min_len > fabs(X - i)){
                min_len = fabs(X-i);
                min_index = i;
            }
        }
    }
    cout << min_index << endl;
    return 0;
}