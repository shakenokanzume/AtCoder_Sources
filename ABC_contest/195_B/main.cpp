#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    int a, b; 
    int w;
    cin >> a >> b >> w;

    int weight = w * 1000;

    // そもそも存在するかどうかを判定
    bool is = false;
    int mn = lim;
    int mx = -1;
    for(int i = 1; a*i <= weight; i++){
        if(a*i <= weight && weight <= b*i){
            mn = min(mn, i);
            mx = max(mx, i);
            is = true;
        }
    }
    if(is) cout << mn << " " << mx << endl;
    else cout << "UNSATISFIABLE" << endl;
    return 0;
}