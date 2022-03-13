#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)
#define repp(i, n) for(int i = 1; i < n; i++)
const int lim = 1000000007;

int main(){
    string S;
    cin >> S;
    if((int)S.size() >= 2){
        string T2 = S.substr((int)S.size() - 2);
        if (T2 == "er")
        {
            cout << "er" << endl;
            return 0;
        }
    }
    if((int)S.size() >= 3){
        string T1 = S.substr((int)S.size() - 3);
        if (T1 == "ist")
        {
            cout << "ist" << endl;
            return 0;
        }
    }
}