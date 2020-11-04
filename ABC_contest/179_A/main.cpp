#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    string S;
    cin >> S;
    int N = (int)S.size();
    if(S[N-1] == 's') S += "es";
    else S += "s";
    cout << S << endl;
    return 0;
}