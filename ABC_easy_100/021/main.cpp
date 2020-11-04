#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
#include <vector>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

bool is_so(ll X){
    for(ll i = 2; i <= sqrt(X); i++){
        if(X % i == 0){
            return false;
        }
    }

    return true;
}

int main(){
    ll X;
    cin >> X;

    while(!is_so(X)){
        X++;
    }

    cout << X << endl;

    return 0;
}