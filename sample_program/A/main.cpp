#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)
const int lim = 1000000007;

string to_str(int N){
    string s;
    while(N != 0){
        s.push_back(N % 10 + '0');
        N /= 10;
    }
    reverse(s.begin(), s.end());
    return s;
}

int main(){
    int a = 1000;
    string s = to_str(a);
    cout << s << endl;
    return 0;
}