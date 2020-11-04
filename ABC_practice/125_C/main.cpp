#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int GCD(int a, int b){
    if(b == 0) return a;
    else return GCD(b, a%b);
}

int main(){
    int N;
    cin >> N;
    vector<int> a(N);
    rep(i, N) cin >> a[i];
    int gcd = a[0];
    rep(i, N) gcd = GCD(gcd, a[i]);
    
}