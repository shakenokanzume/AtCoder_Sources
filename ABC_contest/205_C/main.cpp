#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)
const int lim = 1000000007;


char func(ll a, ll b){
    char ans;
    if(a > b) ans = '>';
    else if(a < b) ans = '<';
    else if(a == b) ans = '=';
    return ans;
}

int sig(ll n){
    if(n < 0) return -1;
    else return 1;
}

int main(){
    ll A, B, C;
    cin >> A >> B >> C;
    ll abs_a = abs(A);
    ll abs_b = abs(B);

    if(C % 2 == 0){
        cout << func(abs_a, abs_b) << endl;
    }else{
        cout << func(A, B) << endl;
    }
    return 0;
}