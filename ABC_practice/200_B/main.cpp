#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(){
    ll N, K;
    cin >> N >> K;
    rep(i, K){
        if(N % 200 == 0){
            N /= 200;
        }else{
            N = N*1000 + 200;
        }
    }
    cout << N << endl;
    return 0;
}