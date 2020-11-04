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
    string S, T;
    cin >> S >> T;
    bool is = true;
    int s = (int)S.size();
    int t = (int)T.size();
    if(t != s + 1) is = false;
    T.erase(t-1);
    if(S != T) is = false;
    if(is) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}