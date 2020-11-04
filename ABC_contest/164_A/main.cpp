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
    int S, W;
    cin >> S >> W;
    if(W >= S) cout << "unsafe" << endl;
    else cout << "safe" << endl;
    return 0;
}