#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)
#define repp(i, n) for(int i = 1; i < n; i++)
const int lim = 1000000007;

int main(){
    string s1, s2;
    cin >> s1 >> s2;
    if(s1 == ".#" && s2 == "#.") cout << "No" << endl;
    else if(s1 == "#." && s2 == ".#") cout << "No" << endl;
    else cout << "Yes" << endl;
    return 0;
}