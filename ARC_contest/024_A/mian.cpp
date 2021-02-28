#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    int L, R;
    cin >> L >> R;

    vector<int> size_l(41, 0), size_r(41, 0);
    rep(i, L){
        int l;
        cin >> l;
        size_l[l]++;
    }
    rep(i, R){
        int r;
        cin >> r;
        size_r[r]++;
    }

    int pair = 0;
    for(int i = 10; i <= 40; i++){
        pair += min(size_l[i], size_r[i]);
    }
    cout << pair << endl;
    return 0;    
}