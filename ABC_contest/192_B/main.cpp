#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    string S;
    cin >> S;
    int N = (int)S.size();

    bool is = true;
    rep(i, N){
        if(i % 2 == 0){
            if('a' > S[i] || S[i] > 'z'){
                is = false;
            }
        }else{
            if('A' > S[i] || S[i] > 'Z'){
                is = false;
            }
        }
    }
    if(is) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}