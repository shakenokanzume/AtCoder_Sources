#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    string s;
    while(cin >> s){
        string w = s;
        if(w == "Left") cout << '<' << endl;
        if(w == "Right") cout << '>' << endl;
        if(w == "AtCoder") cout << 'A' << endl;
    }
    s = "\n";
    return 0;
}