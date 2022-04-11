#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

void func(int n){
    if(n > 1){
        func(n-1);
        cout << n << " ";
        func(n-1);
    }else{
        cout << "1" << " ";
    }
}
int main(){
    int n; cin >> n;
    func(n);
    return 0;
}