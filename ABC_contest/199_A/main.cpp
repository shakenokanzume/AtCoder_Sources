#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    if(a * a + b * b < c * c){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}