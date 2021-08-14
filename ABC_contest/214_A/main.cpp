#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)
const int lim = 1000000007;

int main(){
    int N;
    cin >> N;
    if(1 <= N && N <= 125) cout << "4" << endl;
    if(126 <= N && N <= 211) cout << "6" << endl;
    if(212 <= N && N <= 214) cout << "8" << endl;
    return 0;
}