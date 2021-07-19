#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    int N;
    string S;
    cin >> N >> S;

    rep(i, N){
        if(S[i] == '1'){
            if(i % 2 == 0){
                cout << "Takahashi" << endl;
                return 0;
            }else{
                cout << "Aoki" << endl;
                return 0;
            }
        }
    }
    return 0;
}