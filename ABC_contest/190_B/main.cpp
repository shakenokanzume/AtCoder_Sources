#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    int N, S, D;
    cin >> N >> S >> D;

    bool is = false;
    rep(i, N){
        int x, y;
        cin >> x >> y;

        if(x < S && y > D){
            is = true;
        }
    }
    if(is) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}