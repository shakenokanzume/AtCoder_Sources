#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    string X;
    cin >> X;
    int len = (int)X.size();
    rep(i, len){
        if(X[i] == '.') break;
        cout << X[i];
    }
    cout << endl;
    return 0;
}