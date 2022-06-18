#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    string N; cin >> N;
    reverse(N.begin(), N.end());
    cout << N[1] << N[0] << endl;
    return 0;
}