#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    string T = "oxxoxxoxxoxx";
    string S;
    cin >> S;
    int N = (int)T.size();
    int n = (int)S.size();
    rep(i, 3){
        string val = T.substr(i, n);
        if(val == S){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}