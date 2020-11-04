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
    int h = 3, w = 3;
    int c[h][w];
    rep(i, h){
        rep(j, w) cin >> c[i][j];
    }
    int a[h], b[w];
    a[0] = 0; //この値に依らず、a, bの配列の要素の値は一意に定まる。
    rep(i, w) b[i] = c[0][i] - a[0];
    rep(i, h) a[i] = c[i][0] - b[0];
    bool is = true;
    rep(i, h){
        rep(j, w){
            if(a[i] + b[j] != c[i][j]) is = false;
        }
    }
    if(is) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}