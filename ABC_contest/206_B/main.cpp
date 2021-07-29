#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    ll N;
    cin >> N;
    ll k = 0;
    while(k*k + k < 2*N){
        k++;
    }
    cout << k << endl;
    return 0;
}