#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    int A, B, C;
    cin >> A >> B >> C;
    if(C == 0){
        if(A > B) cout << "Takahashi" << endl;
        else cout << "Aoki" << endl;
    }else{
        if(B > A) cout << "Aoki" << endl;
        else cout << "Takahashi" << endl;
    }
    return 0;
}