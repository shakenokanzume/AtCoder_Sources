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
    int N, D;
    cin >> N >> D;
    int cnt = 0;
    rep(i, N){
        double X, Y;
        cin >> X >> Y;
        double ans = X*X + Y*Y;
        ans = sqrt(ans);
        if(ans <= D) cnt++;
    }
    cout << cnt << endl;
    return 0;
}