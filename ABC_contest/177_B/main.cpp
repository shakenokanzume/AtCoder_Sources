#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(){
    string S, T;
    cin >> S >> T;
    int N = (int)S.size();
    int len = (int)T.size();

    int mn = 10000;
    for(int i = 0; i <= (N-len); i++){
        int num = 0;
        string s = S.substr(i, len);
        rep(j, len){
            if(s[j] != T[j]) num++;
        }
        mn = min(mn, num);
    }
    cout << mn << endl;
    return 0;
}