#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)
const int lim = 1000000007;

int main(){
    string s;
    cin >> s;
    int x, y;
    y = int(s[s.size()-1] - '0');
    s.pop_back();
    s.pop_back();
    x = stoi(s);
    if(0 <= y && y <= 2) cout << x << "-" << endl;
    if(3 <= y && y <= 6) cout << x << endl;
    if(7 <= y && y <= 9) cout << x << "+" << endl;
    return 0;
}